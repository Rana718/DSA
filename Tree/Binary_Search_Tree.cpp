#include <iostream>

using namespace std;

class node{
    public:
        int value;
        node *left;
        node *right;
        node(int val): value(val), left(NULL), right(NULL) {}
};

class BinaryTree{
    public:
        node *root;
        BinaryTree(): root(NULL) {}
        node *createnode(int value){
            return new node(value);
        }
        void Inorder(node *temp){
            if(temp == NULL) return;
            Inorder(temp->left);
            cout<<temp->value<<" ";
            Inorder(temp->right);
        }
        void add(){
            root = createnode(20);
            node *p1 = createnode(18);
            node *p2 = createnode(25);
            node *p3 = createnode(13);
            node *p4 = createnode(19);
            node *p5 = createnode(23);
            node *p6 = createnode(27);
            node *p7 = createnode(41);

            root->left = p1;
            p1->left = p3;
            p1->right = p4;

            root->right = p2;
            p2->left = p5;
            p2->right = p6;
            p6->right = p7;
        }
        bool isBST(node *temp){
            static node *prev = NULL;
            if(temp != NULL){
                if(!isBST(temp->left)){
                    return false;
                }
                if (prev != NULL && temp->value <= prev->value){
                    return false;
                }
                prev = temp;
                return isBST(temp->right);
            }
            return true;
        }
        void checkBST(){
            if(isBST(root)){
                cout<<"The tree is a Binary Search Tree"<<endl;
            }else{
                cout<<"The tree is not a Binary Search Tree"<<endl;
            }
        }
        void Search_element(int key){
            node *temp = root;
            while(temp != NULL){
                if(temp->value == key){
                    cout<<"your element "<<key<<" is found"<<endl;
                    return;
                }
                else if(key < temp->value){
                    temp = temp->left;
                }
                else{
                    temp = temp->right;
                }
            }
            cout<<"your element "<<key<<" is not found"<<endl;
        }
        void insert(int value){
            node *temp = root;
            node *prev;
            while(temp != NULL){
                prev = temp;
                if(temp->value == value){
                    cout<<"Your value is already exits"<<endl;
                    return;
                }
                else if(value < temp->value){
                    temp = temp->left;
                }else{
                    temp = temp->right;
                }
            }
            node *newnode = new node(value);
            if(value < prev->value){
                prev->left = newnode;
            }else{
                prev->right = newnode;
            }
        }
        node *inOrderPredecessor(node *temp){
            temp = temp->left;
            while(temp->right != NULL){
                temp = temp->right;
            }
            return temp;
        }
        node *delete_node(node *temp,int value){
            node *p;
            if (temp == NULL){
                cout<<"Your Tree is Null"<<endl;
                return NULL;
            }
            if(value < temp->value){
                temp->left = delete_node(temp->left, value);
            }
            else if(value > temp->value){
                temp->right = delete_node(temp->right, value);
            }else{
                if (temp->left == NULL && temp->right == NULL) {
                    delete temp;
                    return NULL;
                } else if (temp->left == NULL) {
                    node *tempRight = temp->right;
                    delete temp;
                    return tempRight;
                } else if (temp->right == NULL) {
                    node *tempLeft = temp->left;
                    delete temp;
                    return tempLeft;
                } else {
                    node *pred = inOrderPredecessor(temp);
                    temp->value = pred->value;
                    temp->left = delete_node(temp->left, pred->value);
                }
            }
            return temp;
        }
        
};

int main(){
    BinaryTree tree;
    tree.add();
    cout<<"Your Tree: ";
    tree.Inorder(tree.root);
    cout<<endl;

    // tree.checkBST();

    // tree.Search_element(13);
    // tree.insert(50);
    // cout<<"After insert the element: ";
    // tree.Inorder(tree.root);
    tree.delete_node(tree.root, 20);
    cout<<"After delete any elment: ";
    tree.Inorder(tree.root);
    cout<<endl;
    cout<<"your current root is: "<<tree.root->value;

}