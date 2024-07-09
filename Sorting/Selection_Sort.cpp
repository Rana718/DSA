#include <iostream>

using namespace std;
void Selection_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        
        for(int j=i+1; j<n; j++){
            int min = arr[i];
            if(min>arr[j]){
                min = arr[j];
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[] = {45, 99, 8, 2, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"your arr before sorting: ";
    display(arr, n);
    Selection_sort(arr, n);
    cout<<"your arr after sorting: ";
    display(arr, n);
}