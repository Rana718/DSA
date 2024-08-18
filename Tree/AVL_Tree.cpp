#include <iostream>
#include <algorithm>
using namespace std;

class node{
    public:
        int value;
        node *left;
        node *right;
        int height;
        node(int val): value(val), left(NULL), right(NULL), height(1) {}
};

class AVL_tree{
    private:
        int getheight(node *temp){
            if(temp == NULL){
                return 0;
            }
            return temp->height;
        }
        node *createnode(int val){
            return new node(val);
        }
        int getBalanceFactor(node *temp){
            if(temp == NULL){
                return 0;
            }
            return getheight(temp->left) - getheight(temp->right);
        }
        node *rightRote(node *temp){
            node *p = temp->left;
            node *ptr = p->right;
            p->right = temp;
            temp->left = ptr;
            temp->height = max(getheight(temp->left), getheight(temp->right)) + 1;
            p->height = max(getheight(p->left), getheight(p->right)) + 1;
            return p;
        }
        node *leftRoate(node *temp){
            node *p = temp->right;
            node *ptr = p->left;
            p->left = temp;
            temp->right = ptr;
            temp->height = max(getheight(temp->left), getheight(temp->right)) +1;
            p->height = max(getheight(p->left), getheight(p->right)) +1;
            return p;
        }
        node *insert(node *temp, int val){
            if(temp == NULL){
                return createnode(val);
            }
            if(val < temp->value){
                temp->left = insert(temp->left, val);
            }else if(val > temp->value){
                temp->right = insert(temp->right, val);
            }
            temp->height = max(getheight(temp->left), getheight(temp->right)) +1;
            int bf = getBalanceFactor(temp);

            // left Left case
            if(bf > 1 && val < temp->left->value){
                return rightRote(temp);
            }

            // Right Right case
            if(bf < -1 && val > temp->right->value){
                return leftRoate(temp);
            }

            // left Right case
            if(bf > 1 && val > temp->left->value){
                temp->left = leftRoate(temp->left);
                return rightRote(temp);
            }

            // Right Left case
            if(bf < -1 && val < temp->right->value){
                temp->right = rightRote(temp->right);
                return leftRoate(temp);
            }
            return temp;
        }

    public:
        node *root;
        AVL_tree(): root(NULL) {}  
        void Inorder(node *temp){
            if(temp == NULL){
                return;
            }
            Inorder(temp->left);
            cout<<temp->value<<" ";
            Inorder(temp->right);
        }
        void Insert(int val){
            root = insert(root, val);
        }     
        
};

int main(){
    AVL_tree tree;
    
    tree.Insert(48);
    tree.Insert(7);
    tree.Insert(8);
    tree.Insert(36);
    tree.Insert(71);
    cout<<"Tree: ";
    tree.Inorder(tree.root);

}