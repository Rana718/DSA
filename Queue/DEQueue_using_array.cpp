#include <iostream>

using namespace std;
class Queue{
    private:
        int front;
        int end_p;
        int size;
        int *arr;
    public:
        Queue(int s){
            front = -1;
            end_p = -1;
            size = s;
            arr = new int[s];
        }
        ~Queue(){
            delete[] arr;
        }
        bool isFull(){
            return (end_p == size -1);
        }
        bool isEmpty(){
            return front == end_p;
        }
        void enqueue_front(int value){
            if(isFull()){
                cout<<"Queue is Full";
                return;
            }
            if(front == -1){
                front = end_p = 0;
            }else if(front == 0){
                front = size -1;
            }else{
                front = front -1;
            }
            arr[front] = value;
        }
        void enqueue_end(int value){
            if(isFull()){
                cout<<"Queue is full";
                return;
            }
            if (front == -1){
                front = end_p = 0;
            }else if(end_p == size -1){
                end_p = 0;
            }else{
                end_p = end_p + 1;
            }
            arr[end_p] = value;
            
        }
        void dequeue_front(){
            if(isEmpty()){
                cout<<"Queue is empty";
                return ;
            }
            int value = arr[front];
            if(front == end_p){
                front = end_p = -1;
            }else if(front == size -1){
                front = 0;
            }else{
                front = front + 1;
            }
            cout<<"your front "<<value<<" is removed"<<endl;
        }
        void dequeue_end(){
            if(isEmpty()){
                cout<<"Queue is Empty";
                return;
            }
            int value = arr[end_p];
            if(front == end_p){
                front = end_p = -1;
            }else if(end_p == 0){
                end_p = size -1;
            }else{
                end_p = end_p -1;
            }
            cout<<"Removed from end point: "<<value<<endl;
        }
        void display(){
            if(isEmpty()){
                cout<<"Queue is Empty"<<endl;
                return;
            }
            int i = front;
            while(true){
                cout<<arr[i]<<" ";
                if(i == end_p){
                    break;
                }
                i = (i+1)%size;
            }
            cout<<endl;
        }
};
int main(){
    Queue qe(10);
    qe.enqueue_end(45);
    qe.enqueue_end(4);
    qe.enqueue_end(74);
    cout<<"Queue is: ";
    qe.display();
    qe.dequeue_front();
    cout<<"After delete front element: ";
    qe.display();
    qe.enqueue_front(12);
    cout<<"After add element in front: ";
    qe.display();
    qe.dequeue_end();
    cout<<"After delete end element: ";
    qe.display();
}