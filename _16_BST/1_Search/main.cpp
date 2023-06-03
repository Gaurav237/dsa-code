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

// Iterative
// Time Complexity => O(h)
// Auxiliary Space => O(1)
bool search(Node* root, int x){

    while(root != NULL){
        if(root->key == x){
            return true;
        }else if(root->key > x){
            root = root->left;
        }else{
            root = root->right;
        }
    }
    return false;
}

// Recursive
// Time Complexity => O(h)
// Auxiliary Space => O(h)
bool RecSearch(Node* root, int x){
    if(root == NULL){
        return false;
    }else if(root->key < x){
        RecSearch(root->right, x);
    }else if(root->key > x){
        RecSearch(root->left, x);
    }else{   // (root->key == x)
        return true;
    }
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

    cout << boolalpha << RecSearch(root,20);

    return 0;
}
