#include <iostream>
#include <vector>

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

int main(){
    MaxHeap mh;
    mh.insert(78);
    mh.insert(10);
    mh.insert(46);
    mh.insert(30);
    mh.insert(19);
    mh.insert(8);

    cout<<"Max Heap: ";
    mh.printHeap();
}