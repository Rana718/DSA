#include <iostream>

using namespace std;

class node{
    public:
        int value;
        node *next;
        node(int val): value(val), next(nullptr) {}
};  
class myLinkedList{
    private:
        node *top;
    public:
        myLinkedList(): top(nullptr) {}

        bool isEmpty(){
            return top == nullptr;
        }
        bool isFull(){
            node *temp = new node(0);
            if(temp == nullptr){
                return true;
            }else{
                delete temp;
                return false;
            }
        }
        void push(int value){
            if(isFull()){
                cout<<"Stack is over Flow"<<endl;
            }else{
                node *temp = new node(value);
                temp->next = top;
                top = temp;
            }
        }
        void pop(){
            if(isEmpty()){
                cout<<"Stack is Underr Flow"<<endl;
            }else{
                node *temp = top;
                top = top->next;
                free(temp);
            }
        }
        void top_bottom(){
            node *temp = top;
            cout<<"your top element is "<<temp->value<<endl;
            while(temp->next != nullptr){
                temp = temp->next;
            }
            cout<<"your bottom element is "<<temp->value<<endl;
        }
        void peekdis(){
            node *temp = top;
            int i=1;
            while(temp != nullptr){
                cout<<"your index "<<i<<" value is "<<temp->value<<endl;
                temp = temp->next;
                i++;
            }
        }
        void display(){
            node *temp = top;
            while(temp != nullptr){
                cout<<temp->value<<", ";
                temp = temp->next;
            }
            cout<<endl;
        }
};
int main(){
    myLinkedList ml;
    ml.push(50);
    ml.push(500);
    ml.push(15);
    ml.push(4);
    ml.push(7);
    
    ml.display();
    ml.top_bottom();
    ml.pop();
    cout<<"after pop one element: ";
    ml.display();
    ml.peekdis();
}