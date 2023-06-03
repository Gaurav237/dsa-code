#include <iostream>
using namespace std;

struct Node{
    Node *left;
    int key;
    Node *right;

    Node(int k){
        key = k;
        left = right = nullptr;
    }
};

void Inorder(Node *root){
    if(root != nullptr){
        Inorder(root->left);
        cout << root->key << " ";
        Inorder(root->right);
    }
}

int main() {
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);

    Inorder(root);

    return 0;
}
