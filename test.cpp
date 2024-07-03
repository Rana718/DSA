#include <iostream>

using namespace std;
class node{
    public:
        int value;
        node *prev;
        node *next;

        node(int value){
            this->value = value;
            this->prev = nullptr;
            this->next = nullptr;
        }
};

class DoublyLinkedList{
    private: 
        node *start;
    public:
        DoublyLinkedList(){
            start = nullptr;
        }
        void apped(int value){
            node *newnode = new node(value);
            if(start == nullptr){
                start = newnode;
            }else{
                node *temp = start;
                while(temp->next != nullptr){
                    temp = temp->next;
                }
                temp->next = newnode;
                newnode->prev = temp;
            }
        }
        void display(){
            node *temp = start;
            while(temp!= nullptr){
                cout<<temp->value<<", ";
                temp = temp->next;
            }
            cout<<endl;
        }
};
int main(){
    DoublyLinkedList dl;
    dl.apped(55);
    dl.apped(4);
    dl.apped(10);
    dl.apped(78);
    dl.apped(103);

    cout<<"your linkelist: ";
    dl.display();

}