#include<iostream>
#include<queue>

class node{
    public:
        int value;
        node *left;
        node *right;
        node *parent;

        node(int val): value(val), left(nullptr), right(nullptr), parent(nullptr) {}
};

class MaxHeap{
    private:
        node *root;
        node *lastinserted;

        void swap(node *a, node *b){
            int temp = a->value;
            a->value = b->value;
            b->value = temp;
        }

        void heapifyup(node *p){
            while(p->parent != nullptr && p->parent->value < p->value){
                swap(p, p->parent);
                p = p->parent;
            }
        }

        void heapifyDown(node *p){
            while(p != nullptr){
                node *largest = p;
                if(p->left && p->left->value > largest->value){
                    largest = p->left;
                }
                if(p->right && p->right->value > largest->value){
                    largest = p->right;
                }
                if (largest != p){
                    swap(p, largest);
                    p = largest;
                }else{
                    break;
                }
            }
        }

        node *findLastNode(node *p){
            if(!p){
                return nullptr;
            }
            node *last = nullptr;
            

        }
};




int main(){

}