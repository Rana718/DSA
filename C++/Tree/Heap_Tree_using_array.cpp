#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class MaxHeap{
    private:
        vector<int> heap;

        int parent(int i){
            return (i-1)/2;
        }
        int leftChlid(int i){
            return 2*i+1;
        }
        int rightChild(int i){
            return 2*i+2;
        }

        void heapifyUp(int i){
            while(i != 0 && heap[parent(i)] < heap[i]){
                swap(heap[i], heap[parent(i)]);
                i = parent(i);
            }
        }

        void heapifyDown(int i){
            int largest = i;
            int left = leftChlid(i);
            int right = rightChild(i);

            if(left < heap.size() && heap[left] > heap[i]){
                largest = left;
            }
            if(right < heap.size() && heap[right] > heap[largest]){
                largest = right;
            }
            if(largest != i){
                swap(heap[i], heap[largest]);
                heapifyDown(largest);
            }

        }

    public:
        void insert(int value){
            heap.push_back(value);
            heapifyUp(heap.size() - 1);
        }

        int extractMax(){
            if(heap.size() == 0){
                cout<<"Heap is empty!"<<endl;
                return -1;
            }
            int maxValue = heap[0];
            heap[0] = heap.back();
            heap.pop_back();
            heapifyDown(0);

            return maxValue;
        }

        int getMax(){
            if(heap.size() == 0){
                cout<<"Heap is empty!"<<endl;
                return -1;
            }
            return heap[0];

        }

        void printHeap(){
            for(int i=0; i<heap.size(); i++){
                cout<<heap[i]<<" ";
            }
            cout<<endl;
        }
};

class MinHeap{
    private:
        vector<int> heap;

        int parent(int i){
            return (i-1)/2;
        }
        int leftChild(int i){
            return 2*i+1;
        }
        int rightChlid(int i){
            return 2*i+2;
        }

        void heapifyUp(int i){
            while(i != 0 && heap[parent(i)] > heap[i]){
                swap(heap[i], heap[parent(i)]);
                i = parent(i);
            }
        }
        void heapifDown(int i){
            int smallest = i;
            int left = leftChild(i);
            int right = rightChlid(i);
            if(left < heap.size() && heap[left] < heap[smallest]){
                smallest = left;
            }
            if(right < heap.size() && heap[right] < heap[smallest]){
                smallest = right;
            }
            if(smallest != i){
                swap(heap[i], heap[smallest]);
                heapifDown(smallest);
            }
        }
    
    public:
        void insert(int i){
            heap.push_back(i);
            heapifyUp(heap.size()-1);
        }
        int removeMin(){
            if(heap.size() == 0){
                cout<<"Heap is empty!"<<endl;
                return -1;
            }
            int smallest = heap[0];
            heap[0] = heap.back();
            heap.pop_back();
            heapifDown(0);
            return smallest;
        }
        int getMin(){
            if(heap.size() == 0){
                cout<<"Heap is Empty"<<endl;
                return -1;
            }
            return heap[0];
        }
        void printHeap(){
            for(int i=0; i<heap.size(); i++){
                cout<<heap[i]<<" ";
            }
            cout<<endl;
        }
};


int main(){
    cout<<"Max heap Tree"<<endl;
    MaxHeap maxh;
    maxh.insert(78);
    maxh.insert(10);
    maxh.insert(46);
    maxh.insert(30);
    maxh.insert(19);
    maxh.insert(8);
    cout<<"Max Heap: ";
    maxh.printHeap();
    cout<<"Root element: " <<maxh.getMax()<<endl;
    cout<<"Extraxting max: "<<maxh.extractMax()<<endl;
    cout<<"Heap after extraction: ";
    maxh.printHeap();
    maxh.insert(80);
    cout<<"after add a new element: ";
    maxh.printHeap();


    cout<<endl<<endl<<"Min Heap Tree"<<endl;
    MinHeap minh;
    minh.insert(78);
    minh.insert(10);
    minh.insert(46);
    minh.insert(30);
    minh.insert(19);
    minh.insert(8);
    cout<<"Max Heap: ";
    minh.printHeap();
    cout<<"Root element: " <<minh.getMin()<<endl;
    cout<<"Extraxting Min "<<minh.removeMin()<<endl;
    cout<<"Heap after remove: ";
    minh.printHeap();
    minh.insert(80);
    cout<<"after add a new element: ";
    minh.printHeap();
}