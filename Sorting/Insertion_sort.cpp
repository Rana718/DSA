#include <iostream>

using namespace std;

void insertion_sort(int arr[], int len){
    int co = len-1;
    for(int i=1; i<len; i++){
        int key = arr[i];
       
        int j = i-1;
        while(j >= 0 && arr[j] > key){
            co++;
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
        co--;
    }
    cout<<co<<endl;
}
void print_arrray(int arr[], int len){
    for(int i=0; i<len; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1,2,3};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout<<"before sorting array: ";
    print_arrray(arr, len);
    insertion_sort(arr, len);
    cout<<"After sorting array: ";
    print_arrray(arr, len);
}