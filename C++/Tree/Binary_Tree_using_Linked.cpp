#include <iostream>

using namespace std;

class node{
    public:
        int value;
        node *left;
        node *right;

        node(int val) : value(val), left(NULL), right(NULL) {}     
};


            // Create a Binary tree Manually position set;

class BinaryTree{
    public:
        node *root;
        BinaryTree(): root(NULL) {}

        node *createnode(int value){
            return new node(value);
        }
        void Preorder(node *temp){
            if(temp == NULL) return;
            cout<<temp->value<<" ";
            Preorder(temp->left);
            Preorder(temp->right);
        }
        void Postorder(node *temp){
            if(temp == NULL) return;
            Postorder(temp->left);
            Postorder(temp->right);
            cout<<temp->value<<" ";
        }
        void Inorder(node *temp){
            if(temp == NULL) return;
            Postorder(temp->left);
            cout<<temp->value<<" ";
            Postorder(temp->right);
        }
        void add(){
            root = createnode(2);
            node* p1 = createnode(1);
            node* p2 = createnode(4);
            node* p3 = createnode(78);
            node* p4 = createnode(65);
            node* p5 = createnode(98);
            node* p6 = createnode(40);

            root->left = p1;
            p1->left = p3;
            p1->right = p4;

            root->right = p2;
            p2->right = p5;
            p2->left = p6;
        }
};
int main() {
    BinaryTree tree;
    tree.add();

    // tree.Preorder(tree.root);
    // tree.Postorder(tree.root);
    tree.Inorder(tree.root);
}






            // Create a Binary tree Automatic position set;

// class BinaryTree{
//     private:
//         void insertrec(node *item, int value){
//             if(value < item->value){
//                 if(item->left == NULL){
//                     item->left = new node(value);
//                 }else{
//                     insertrec(item->left, value);
//                 }
//             }else{
//                 if(item->right == NULL){
//                     item->right = new node(value);
//                 }else{
//                     insertrec(item->right, value);
//                 }
//             }
//         }

//         void Preorder(node *temp){
//             if(temp == NULL) return;
//             cout<<temp->value<<" ";
//             Preorder(temp->left);
//             Preorder(temp->right);
            
//         }
//         void Postorder(node *temp){
//             if(temp == NULL) return;
//             Postorder(temp->left);
//             Postorder(temp->right);
//             cout<<temp->value<<" ";
//         }

//         void Inorder(node *temp){
//             if(temp == NULL) return;
//             Inorder(temp->left);
//             cout<<temp->value<<" ";
//             Inorder(temp->right);
//         }
//     public:
//         node *root;
//         BinaryTree(): root(NULL) {}
//         void insert(int value){
//             if(root == NULL){
//                 root = new node(value);
//             }else{
//                 insertrec(root, value);
//             }
//         }
//         void display(){
//             // Preorder(root);
//             // Postorder(root);
//             Inorder(root);

//             cout<<endl;
//         }
// };

// int main(){
//     BinaryTree bt;
//     bt.insert(20);
//     bt.insert(50);
//     bt.insert(45);

//     bt.display();

// }