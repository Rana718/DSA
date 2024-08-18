#include <iostream>
#include <vector>

using namespace std;

class Queue{
    private:
        int size;
        int font;
        int rear;
        vector<int> arr;
    public:
        Queue(int siz): size(siz), font(0), rear(0){
            arr.resize(siz);
        } 
        bool isEmpty(){
            return rear == font;
        }
        bool isFull(){
            return rear == size -1;
        }
        void enqueue(int val){
            if(isFull()){
                cout<<"This Queue is full"<<endl;
            }else{
                rear++;
                arr[rear] = val;
            }
            
        }
        int dequeue(){
            int a = -1;
            if(isEmpty()){
                cout<<"This Queue is empty"<<endl;
            }else{
                font++;
                a = arr[font];
            }
            return a;
        }
        void BFS(){
            int node;
            int i = 1;
            vector<int> visited(7, 0);
            vector<vector<int>> a = {
                {0, 1, 1, 1, 0, 0, 0},
                {1, 0, 1, 0, 0, 0, 0},
                {1, 1, 0, 1, 1, 0, 0},
                {1, 0, 1, 0, 1, 0, 0},
                {0, 0, 1, 1, 0, 1, 1},
                {0, 0, 0, 0, 1, 0, 0}, 
                {0, 0, 0, 0, 1, 0, 0}
            };
            cout<<i<<" ";
            visited[i] = 1;
            enqueue(i);

            while (!isEmpty()){
                int node = dequeue();
                for(int j=0; j<7; j++){
                    if(a[node][j] == 1 && visited[j] == 0){
                        cout<<j<<" ";
                        visited[j] = 1;
                        enqueue(j);
                    }
                }
            }
        }
};

int main(){
    Queue q(400);
    q.BFS();

}