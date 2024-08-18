#include <iostream>

using namespace std;
class Queue{
    private:
        int front;
        int end;
        int size;
        int *arr;
    public:
        Queue(int s){
            front = -1;
            end = -1;
            size = s;
            arr = new int[s];
        }
        ~Queue(){
            delete[] arr;
        }
        bool isFull(){
            return (end == size -1);
        }
        bool isEmpty(){
            return front == end;
        }
        void enqueue(int value){
            if(isFull()){
                cout<<"Queue is full";
                return;
            }
            if (front == -1){
                front = 0;
            }
            arr[++end] = value;
            
        }
        void dequeue(){
            if(isEmpty()){
                cout<<"Queue is empty";
                return ;
            }
            int value = arr[front++];
            if(front > end){
                front = -1;
                end = -1;
            }
            cout<<"your front "<<value<<" is removed"<<endl;
        }
        void display(){
            for(int i=front; i<=end; i++){
                cout<<arr[i]<<", ";
            }
            cout<<endl;
        }
};
int main(){
    Queue qe(10);
    qe.enqueue(10);
    qe.enqueue(45);
    qe.enqueue(7);
    qe.enqueue(1);

    qe.display();
    qe.dequeue();
    cout<<"your final array: ";
    qe.display();
}