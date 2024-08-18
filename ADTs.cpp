#include <iostream>

using namespace std;
class Myarray{
    private:
        int total_size;
        int used_size;
        int *ptr;
    public:
        Myarray(int tsize, int usize){
            total_size = tsize;
            used_size = usize;
            ptr = new int[tsize];
        }
        ~Myarray(){
            delete[] ptr;
        }

        void show(){
            for(int i=0; i<used_size; i++){
                cout<<ptr[i]<<endl;
            }
        }

        void setValues(){
            
            cout<<"Enter your elements : ";
            for(int i=0; i<used_size; i++){
                cin>>ptr[i];
            }
        }

};
int main(){
    int n;
    cout<<"Enter your elements number: ";
    cin>>n;
    Myarray marks(100, n);
    cout<<"Set your value: "<<endl;
    marks.setValues();
    cout<<"Your elements is: "<<endl;
    marks.show();

}