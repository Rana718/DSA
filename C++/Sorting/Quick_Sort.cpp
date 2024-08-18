#include <iostream>

using namespace std;

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = (low - 1);
    for(int j=low; j<=high-1; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return(i+1);
}

void quickSort(int arr[], int low, int high){
    if(low < high){
        int p = partition(arr, low, high);
        quickSort(arr, low, p-1);
        quickSort(arr, p+1, high);
    }
}

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {40, 99, 2, 10, 85, 7, 61, 35, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"before Sorting the Array: ";
    display(arr, n);
    quickSort(arr, 0, n-1);
    cout<<"After Sorting the Array: ";
    display(arr, n);
}