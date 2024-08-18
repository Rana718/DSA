#include <iostream>

using namespace std;
class node{
    public:
        int value;
        node *next;
        node *prev;
        node(int val): value(val), next(nullptr), prev(nullptr) {}
};
class DEQueue{
    private:
        node *front;
        node *end_p;
    public:
        DEQueue(): front(nullptr), end_p(nullptr) {}

        bool isEmpty(){
            return front==nullptr;
        }
        void enqueue_front(int val){
            node *newnode = new node(val);
            if(isEmpty()){
                front = end_p = newnode;
            }else{
                newnode->next = front;
                front->prev = newnode;
                front = newnode;
            }
        }
        void enqueue_end(int val){
            node *newnode = new node(val);
            if(isEmpty()){
                front = end_p = newnode;
            }else{
                newnode->prev = end_p;
                end_p->next = newnode;
                end_p = newnode;
            }
        }
        void dequeue_front(){
            if(isEmpty()){
                cout<<"DEQueue is empty"<<endl;
                return;
            }
            node *temp = front;
            int val = temp->value;
            front = front->next;
            if(front != nullptr){
                front->prev = nullptr;
            }else{
                end_p = nullptr;
            }
            delete temp;
            cout<<"Removed from front: "<<val<<endl;
        }
        void dequeue_end(){
            if(isEmpty()){
                cout<<"DEQueue is empty"<<endl;
            }
            node *temp = end_p;
            int val = temp->value;
            end_p = end_p->prev;
            if(end_p != nullptr){
                end_p->next = nullptr;
            }else{
                front = nullptr;
            }
            delete temp;
            cout<<"Removed from end point: "<<val<<endl;
        }
        void display() {
            if (isEmpty()) {
                cout << "Deque is empty" << endl;
                return;
            }
            node *temp = front;
            while (temp != nullptr) {
                cout << temp->value << " ";
                temp = temp->next;
            }
            cout << endl;
        }
        void display_reverse(){
            if (isEmpty()) {
                cout << "Deque is empty" << endl;
                return;
            }
            node *temp = end_p;
            while(temp != nullptr){
                cout<<temp->value<<" ";
                temp = temp->prev;
            }
            cout<<endl;
        }
};
int main(){
    DEQueue dq;
    dq.enqueue_end(80);
    dq.enqueue_end(99);
    dq.enqueue_end(21);
    dq.enqueue_end(79);
    dq.enqueue_end(74);
    cout<<"DEQueue is: ";
    dq.display();
    dq.dequeue_front();
    cout<<"After delete the front element: ";
    dq.display();
    dq.enqueue_front(69);
    cout<<"After add the front element: ";
    dq.display();
    dq.dequeue_end();
    cout<<"After delete the end element: ";
    dq.display();

    cout<<"Reverse the DEQueue: ";
    dq.display_reverse();
}