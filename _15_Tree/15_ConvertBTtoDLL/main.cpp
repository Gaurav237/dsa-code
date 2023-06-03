#include <bits/stdc++.h>
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


Node* _prev = NULL;
Node* head = NULL;

Node* BTtoDLL(Node* root){
    if(root == NULL){
        return root;
    }

    // Recursively convert left subtree
    // Node* head = BTtoDLL(root->left);
    BTtoDLL(root->left);
    
    // Now convert this node
    if(_prev == NULL){
        head = root;
    }else{
        root->left = _prev;
        _prev->right = root;
    }
    _prev = root;
    
    // Finally convert right subtree
    BTtoDLL(root->right);

    return head;
}

int main() {
    Node *root = new Node(10);
    root->left = new Node(5);
//    root->left->right = new Node(40);
//    root->left->left = new Node(80);
//    root->left->left->left = new Node(20);
//    root->left->right->right = new Node(10);
    root->right = new Node(20);
    root->right->left = new Node(30);
    root->right->right = new Node(35);
//    root->right->right->left = new Node(6);


    Node* ptr = BTtoDLL(root);
    while(ptr != NULL){
        cout << ptr->key << " ";
        ptr = ptr->right;
    }
    
    return 0;
}
