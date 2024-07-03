#include <iostream>

using namespace std;

class node{
    public:
        int value;
        node *next;
        node(int val): value(val), next(NULL){}
};
class Queue{
    public:
        node *front, *end_p;
        Queue(): front(NULL), end_p(NULL) {}

        bool isEmpty(){
            return front == NULL;
        }

        void enqueue(int val){
            node *newnode = new node(val);
            if (end_p == NULL){
                front = end_p = newnode;
            }else{
                end_p->next = newnode;
                end_p = newnode;
            }
        }

        void dequeue(){
            if (isEmpty()){
                cout<<"Queue is empty"<<endl;
                return;
            }
            node *temp = front;
            int val = temp->value;
            front = front->next;
            if(isEmpty()){
                end_p == NULL;
            }
            delete temp;
            cout<<val<<" this element is remove"<<endl;

        }

        void display(){
            node *temp = front;
            while (temp !=NULL){
                cout<<temp->value<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }
};
int main(){
    Queue qe;
    qe.enqueue(103);
    qe.enqueue(89);
    qe.enqueue(10);
    qe.enqueue(8);
    qe.enqueue(47);

    cout<<"Linked list is: ";
    qe.display();

    qe.dequeue();
    qe.dequeue();

    cout<<"After delete some element: ";
    qe.display();

    qe.enqueue(45);
    qe.enqueue(99);

    cout<<"After add some element: ";
    qe.display();
}