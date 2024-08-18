#include <iostream>

using namespace std;
class myarray{
    private:
        int n;
        int *arr;
    public:
        myarray(): n(0), arr(nullptr){}
        ~myarray() {delete[] arr;}
        void create(int x){
            cout<<"Enter how many elements store: ";
            cin>>n;
            arr = new int[x];
            cout<<"ENter your array elements: ";
            for(int i=0; i<n; i++){
                cin>>arr[i];
            }

        }
        void delet(int ind){
            for(int i=ind; i<n; i++){
                arr[i] = arr[i+1];
            }
            n--;
        }
        bool add(int ind, int ele, int x){
            
            if(n>=x){
                return false;
            }
            for(int i=n; i>=ind; i--){
                arr[i+1] = arr[i];
            }
            arr[ind] = ele;
            n++;
            return true;
        }
        void display(){
            
            for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            
        }

};
int main(){
    int n, ind, index,ele;
    cout<<"Enter your array size: ";
    cin>>n;
    myarray ma;
    ma.create(n);
    cout<<"your array is: ";
    ma.display();
    // cout<<"add element enter index and element: ";
    // cin>>ind>>ele;
    // if(ma.add(ind, ele, n)){
    //     cout<<"your new array is: ";
    //     ma.display();
    // }else{
    //     cout<<"your array elemants is max";
    // }
    cout<<"Enter your delete index: ";
    cin>>index;
    ma.delet(index);
    cout<<"your final array: ";
    ma.display();


}