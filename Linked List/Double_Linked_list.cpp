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

class DoubleLinkedList{
    private: 
        node *start;
        node *end_p;
    public:
        DoubleLinkedList(){
            start = nullptr;
            end_p = nullptr;
        }
        void apped(int value){
            node *newnode = new node(value);
            if(start == nullptr){
                start = newnode;
                end_p = newnode;
            }else{
                end_p->next = newnode;
                newnode->prev = end_p;
                end_p = newnode;
            }
        }
        void dele(){
            if(end_p == nullptr){
                cout<<"List is Empty."<<endl;
                return;
            }
            node *temp = start;
            if(start == end_p){
                start = nullptr;
                end_p = nullptr;
            }else{
                end_p = end_p->prev;
                end_p->next = nullptr;
            }
            delete temp;
        }
        void del_between(int ind){
            node *ptr = start;
            node *p = start->next;
            for(int i=0; i<ind-1; i++){
                ptr = ptr->next;
                p = p->next;
            }
            ptr->next = p->next;
            if (p->next != nullptr){
                p->next->prev = ptr;
            }else{
                end_p = ptr;
            }
            delete p;
        }
        void display(){
            node *temp = start;
            while(temp!= nullptr){
                cout<<temp->value<<", ";
                temp = temp->next;
            }
            cout<<endl;
        }
        void display_reverse(){
            node *temp = end_p;
            while(temp != nullptr){
                cout<<temp->value<<", ";
                temp = temp->prev;
            }
            cout<<endl;
        }
};
int main(){
    DoubleLinkedList dl;
    dl.apped(55);
    dl.apped(4);
    dl.apped(10);
    dl.apped(78);
    dl.apped(103);

    cout<<"your linkelist: ";
    dl.display();
    dl.del_between(2);
    cout<<"after delete the index 2: ";
    dl.display();
    cout<<"Reverse the Linked list: ";
    dl.display_reverse();

}