#include <iostream>

using namespace std;
class node{
    public:
        int value;
        node *next;
        node *prev;
        node(int val): value(val), next(nullptr), prev(nullptr){}
};
class mylist{
    private:
        node *start;
        node *end;
    public:
        
        mylist(): start(nullptr), end(nullptr) {}

        void push(int val){
            node *newnode = new node(val);
            if(start == nullptr){
                start = end = newnode;
            }else{
                end->next = newnode;
                newnode->prev = end;
                end = newnode;
            }
        }
        void display_reverse(){
            node *temp = end;
            int sum =0;
            while(temp != nullptr){
                int a = temp-> value;
                sum = sum*10+a;
                cout<<temp->value<<", ";
                temp = temp->prev;
            }
            cout<<endl<<"your sum is "<<sum;
        }
};
int main(){
    mylist ml;
    ml.push(1);
    ml.push(4);
    ml.push(5);
    ml.push(7);

    ml.display_reverse();

}