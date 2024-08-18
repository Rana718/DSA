#include <iostream>
#include <wbemidl.h>
#pragma comment(lib, "wbemuuid.lib")

int main() {
    HRESULT hres;

    // Initialize COM
    hres = CoInitializeEx(0, COINIT_MULTITHREADED);
    if (FAILED(hres)) {
        std::cerr << "Failed to initialize COM library. Error code = 0x" << std::hex << hres << std::endl;
        return 1;
    }

    // Set general COM security levels
    hres = CoInitializeSecurity(
        NULL, 
        -1,                          
        NULL,                        
        NULL,                        
        RPC_C_AUTHN_LEVEL_DEFAULT,   
        RPC_C_IMP_LEVEL_IMPERSONATE, 
        NULL,                        
        EOAC_NONE,                   
        NULL                         
    );

    if (FAILED(hres)) {
        std::cerr << "Failed to initialize security. Error code = 0x" << std::hex << hres << std::endl;
        CoUninitialize();
        return 1; 
    }

    IWbemLocator *pLoc = NULL;
    hres = CoCreateInstance(
        CLSID_WbemLocator,             
        0, 
        CLSCTX_INPROC_SERVER, 
        IID_IWbemLocator, (LPVOID *)&pLoc);
    
    if (FAILED(hres)) {
        std::cerr << "Failed to create IWbemLocator object. Err code = 0x" 
            << std::hex << hres << std::endl;
        CoUninitialize();
        return 1;                 
    }

    IWbemServices *pSvc = NULL;

    hres = pLoc->ConnectServer(
         BSTR(L"ROOT\\CIMV2"), 
         NULL,                    
         NULL,                    
         0,                       
         NULL,                    
         0,                       
         0,                       
         &pSvc                    
         );
    
    if (FAILED(hres)) {
        std::cerr << "Could not connect. Error code = 0x" 
             << std::hex << hres << std::endl;
        pLoc->Release();     
        CoUninitialize();
        return 1;               
    }

    hres = CoSetProxyBlanket(
       pSvc,                        
       RPC_C_AUTHN_WINNT,           
       RPC_C_AUTHZ_NONE,            
       NULL,                        
       RPC_C_AUTHN_LEVEL_CALL,      
       RPC_C_IMP_LEVEL_IMPERSONATE, 
       NULL,                        
       EOAC_NONE                    
    );

    if (FAILED(hres)) {
        std::cerr << "Could not set proxy blanket. Error code = 0x" 
              << std::hex << hres << std::endl;
        pSvc->Release();
        pLoc->Release();     
        CoUninitialize();
        return 1;               
    }

    IEnumWbemClassObject* pEnumerator = NULL;
    hres = pSvc->ExecQuery(
        BSTR(L"WQL"), 
        BSTR(L"SELECT * FROM Win32_Processor"), 
        WBEM_FLAG_FORWARD_ONLY | WBEM_FLAG_RETURN_IMMEDIATELY, 
        NULL,
        &pEnumerator);
    
    if (FAILED(hres)) {
        std::cerr << "Query for CPU name failed. Error code = 0x" 
            << std::hex << hres << std::endl;
        pSvc->Release();
        pLoc->Release();
        CoUninitialize();
        return 1;               
    }

    IWbemClassObject *pclsObj = NULL;
    ULONG uReturn = 0;
   
    while (pEnumerator) {
        HRESULT hr = pEnumerator->Next(WBEM_INFINITE, 1, 
            &pclsObj, &uReturn);

        if(0 == uReturn) {
            break;
        }

        VARIANT vtProp;

        hr = pclsObj->Get(L"Name", 0, &vtProp, 0, 0);
        wprintf(L" CPU Name : %s\n", vtProp.bstrVal);
        VariantClear(&vtProp);

        pclsObj->Release();
    }

    pSvc->Release();
    pLoc->Release();
    pEnumerator->Release();
    CoUninitialize();

    return 0;   
}
