#include <iostream>

using namespace std;

void bubble_sort(int arr[], int n){
    int q =1;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                q=0;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
            }
        }
        if(q==1){
            cout<<"your array is already sorted"<<endl;
            return;
        }
    }
}

void array_print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1,2,3,4};
    int len = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, len);
    cout<<"your sorting array is: ";
    array_print(arr, len);

}