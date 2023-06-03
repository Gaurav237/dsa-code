
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

void convertCSP(Node* root){
    if(root == NULL)
        return;

    int childSum = 0;
    if(root->left) 
        childSum += root->left->key;
    if(root->right)
        childSum += root->right->key;

    if(root->key > childSum){
        if(root->left)  root->left->key = root->key;
        if(root->right) root->right->key = root->key;
    }

    convertCSP(root->left);
    convertCSP(root->right);

    int newSum = 0;
    if(root->left) 
        newSum += root->left->key;
    if(root->right)
        newSum += root->right->key;
    if(root->left || root->right)   
        root->key = newSum;
}


int main() {
    Node *root = new Node(35);
    root->left = new Node(9);
   root->left->right = new Node(14);
    root->left->left = new Node(43);
    // root->left->left->left = new Node(20);
//    root->left->right->right = new Node(10);
    root->right = new Node(10);
    root->right->left = new Node(7);
    root->right->right = new Node(9);
//    root->right->right->left = new Node(6);

    convertCSP(root);

    return 0;
}
