#include <bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int k){
        key = k;
        left = right = nullptr;
    }
};

// method 3
Node* inSuccessor(Node* root, Node* p){
    Node* succ = NULL; // if no successor found, then return NULL
    while(root != NULL){
        if(root->key <= p->key){
            root = root->right;
        }else{
            succ = root;
            root = root->left;
        }
    }
    return succ;
}

int main() {
    Node* root = new Node(15);
    Node* t1 = new Node(5);
    Node* t2 = new Node(3);
    Node* t3 = new Node(20);
    Node* t4 = new Node(18);
    Node* t5 = new Node(80);
    Node* t6 = new Node(16);

    root->left = t1;
    root->left->left = t2;
    root->right = t3;
    root->right->left = t4;
    root->right->right = t5;
    root->right->left->left = t6;

    Node* succ = inSuccessor(root, t3);
    cout << succ->key;

    return 0;
}
