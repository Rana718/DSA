#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int max_v(vector<int> arr){
    int max = INT_MIN;
    for(int n: arr){
        if(n > max){
            max = n;
        }
    }
    return max;
}

void countsort(vector<int> &arr){
    int max_val = max_v(arr);
    vector<int> coun(max_val+1, 0);
    for(int num: arr){
        coun[num]++;
    }
    int index = 0;
    for(int i=0; i<=max_val; i++){
        while(coun[i] > 0){
            arr[index++] = i;
            coun[i]--;
        }
    }
}

void display(vector<int> arr){
    for (int num: arr){
        cout<<num<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr = {7, 8, 15, 20, 13, 11, 5, 2};
    cout<<"Before sorting: ";
    display(arr);
    countsort(arr);
    cout<<"After Sorting: ";
    display(arr);
}