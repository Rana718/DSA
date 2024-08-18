#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;
        node(int data){
            this->data = data;
            this->next = nullptr;
        }
};
class circularLinkedList{
    private:
        node* start;
    public:
        circularLinkedList(){
            start = nullptr;
        }

        void Apped(int value){
            node *newNode = new node(value);
            if(!start){
                start = newNode;
                start->next = start;
            }else{
                node *temp = start;
                while(temp->next != start){
                    temp = temp->next;
                }
                temp->next = newNode;
                newNode->next = start;
            }
        }

        void display(){
            node *temp = start;
            do{
                cout<< temp->data<<", ";
                temp = temp->next;
            }while(temp != start);
            cout<<endl;
        }

        void intfirst(int value){
            node *newNode = new node(value);
            if(!start){
                start = newNode;
                start->next = start;
            }else{
                node *temp = start;
                while(temp->next != start){
                    temp = temp->next;
                }
                temp->next = newNode;
                newNode->next = start;
                start = newNode;
            }
        }
};
int main(){

    circularLinkedList cl;
    cl.Apped(58);
    cl.Apped(2);
    cl.Apped(87);
    cl.Apped(11);
    cl.Apped(103);

    cl.intfirst(4);
    cout<<"Your output is: ";
    cl.display();

}