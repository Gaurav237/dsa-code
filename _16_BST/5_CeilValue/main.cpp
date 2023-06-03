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

int CeilValue(Node* root, int x){
    int res = -1;
    while(root != NULL){
        if(root->key == x){
            return x;
        }else if(root->key > x){
            res = root->key;
            root = root->left;
        }else{  // ( root->key < x )
            root = root->right;
        }
    }
    return res;
}

int main() {
    Node* root = new Node(10);
    Node* t1 = new Node(5);
//    Node* t2 = new Node(3);
    Node* t3 = new Node(15);
    Node* t4 = new Node(12);
    Node* t5 = new Node(30);
//    Node* t6 = new Node(16);

    root->left = t1;
//    root->left->left = t2;
    root->right = t3;
    root->right->left = t4;
    root->right->right = t5;
//    root->right->left->left = t6;

    cout << CeilValue(root,40);

    return 0;
}