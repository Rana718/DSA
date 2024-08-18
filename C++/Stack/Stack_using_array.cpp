#include <iostream>

using namespace std;
class myarray{
    private:
        int size;
        int top;
        int *arr;
    public:
        myarray(int s){
            size = s;
            top = -1;
            arr = new int[size];
        }
        

        bool isempty(){
            return top == -1;
        }
        bool isFull(){
            return top == size-1;
        }

        void push(int value){
            if(isFull()){
                cout<<"your stack is Full"<<endl;
            }else{
                arr[++top] = value;
            }
        }

        void popup(){
            if(isempty()){
                cout<<"your stack is Empty"<<endl;
            }else{
                int value = arr[top];
                top--;
                cout<<"your "<<value<<" This element is delete which in index "<<top+1<<endl;
            }
        }

        void peek(){
            int len=1;
            for(int i=top; i>=0; i--){
                cout<<len<<" index element is "<<arr[i]<<endl;
                len++;
            }
        }

        void showtop(){
            cout<<"your top element is "<<arr[top]<<endl;
            
        }
        void showbottom(){
            cout<<"your buttom element is "<<arr[0]<<endl;
        }

        void display(){
            for(int i=0; i<=top; i++){
                cout<<arr[i]<<" ";
            }

        }
};
int main(){
    myarray ma(15);
    ma.push(50);
    ma.push(30);
    ma.push(48);
    ma.push(10);
    ma.push(78);

    // ma.popup();
    // ma.display();

    ma.peek();
    ma.showtop();
    ma.showbottom();
}