#include <iostream>

using namespace std;

        
class node{
    public:
        int value;
        node *next;
        node(int val): value(val), next(NULL) {}
};

class LinkedList{
    public:
        node *start;
        LinkedList(): start(NULL) {}

        void app(int value){
            node *newnode = new node(value);
            if(start == NULL){
                start = newnode;
            }else{
                node *temp = start;
                while (temp->next != NULL){
                    temp = temp->next;

                }
                temp->next = newnode;
            }
        }
        void begin(){
            int value;
            cout<<"Enter your new node: ";
            cin>>value;
            node *newnode = new node(value);
            newnode->next = start;
            start = newnode;
        }
        void between(int ind){
            int value, i=0;
            cout<<"Enter your new node: ";
            cin>>value;
            node *newnode = new node(value);
            node *ptr = start;
            while(i != ind-1){
                ptr = ptr->next;
                i++;
            }
            newnode->next = ptr->next;
            ptr->next = newnode;
        }
        void value_to_add(int value){
            int n;
            cout<<"Enter your value: ";
            cin>>n;
            node *newnode = new node(n);
            node *ptr = start;
            while(ptr->value != value){
                ptr = ptr->next;
            }
            newnode->next = ptr->next;
            ptr->next = newnode;
            
        }
        void display(){
            node *temp = start;
            while(temp != NULL){
                cout<<temp->value<<", ";
                temp = temp->next;
            }
            cout<<endl;
        }
        void del_begin(){
            node *temp = start;
            start = start->next;
            free(temp);
        }
        void del_between(int ind){
            node *ptr = start;
            node *p = start->next;
            for(int i=0; i<ind-1; i++){
                ptr = ptr->next;
                p = p->next;
            }
            ptr->next = p->next;
            free(p);
        }
        void del_last(){
            node *ptr = start;
            node *p = start->next;
            while(p->next != NULL){
                ptr = p;
                p = p->next;
            }
            ptr->next = NULL;
            free(p);
        }
        void del_by_value(int value){
            node *ptr = start;
            node *p = start->next;
            while(p->value != value){
                ptr = ptr->next;
                p = p->next;

            }
            ptr->next = p->next;
            free(p);
        }
        
};
int main(){
    LinkedList li;
    li.app(52);
    li.app(5);
    li.app(2);
    li.app(10);
    li.app(43);
    li.app(103);
    cout<<"your linked list: ";
    li.display();

    li.begin();
    cout<<"Your new linked list: ";

    int index;
    cout<<"Enter your index: ";
    cin>>index;
    li.between(index);

    cout<<"Enter your element: ";
    cin>>index;
    li.app(index);

    cout<<"Enter your element value: ";
    cin>>index;
    li.value_to_add(index);

    li.del_begin();
    cout<<"After delete you frist element: ";

    cout<<"Enter your index: ";
    cin>>index;
    li.del_between(index);

    li.del_last();
    cout<<"After delete element: ";

    cout<<"Enter your delete element value: ";
    cin>>index;
    li.del_by_value(index);
    li.display();
}