#include <iostream>
#include <string>
using namespace std;
class node{
    public:
        char value;
        node *next;
        node(char val): value(val), next(nullptr){}
};
class checkparenthesis{
    private: 
        node *top;
    public:
        checkparenthesis(): top(nullptr){}

        bool isEmpty(){
            return top == nullptr;
        }
        void push(char val){
            node *temp = new node(val);
            temp->next = top;
            top = temp;
        }
        void pop(){
            if(isEmpty()){
                cout<<"Your Stack is Undr Flow";
                return;
            }
            node *temp = top;
            top = top->next;
            delete temp;
        }
        char peek(){
            if(!isEmpty()){
                return top->value;
            }
            return '\0';
        }
        bool chech(string val){
            for(int i=0; i<val.size(); i++){
                char ch = val[i];
                if(ch =='(' || ch == '{' || ch == '['){
                    push(ch);
                }
                else if(ch == ')' || ch == '}' || ch == ']'){
                    if(isEmpty()){
                        return false;
                    }
                    char topchar = peek();
                    if ((ch == ')' && topchar == '(') || (ch == '}' && topchar == '{') || (ch == ']' && topchar == '[')) {
                        pop();
                    } else {
                        return false;
                    }
                }
            }
            return isEmpty();
        }
};
int main(){
    checkparenthesis cp;
    string user_input;
    cout<<"Enter your equation: ";
    getline(cin, user_input);
    
    if(cp.chech(user_input)){
        cout<<"your Equation is stable";
    }else{
        cout<<"your Equation is unstable";
    }
    
    

}