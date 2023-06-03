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

// this function calculates nearest greater value of the NON_LEAF Node which is to be deleted.
Node* getSuccessor(Node* curr){
    curr = curr->right;
    while(curr != NULL && curr->left != NULL){
        curr = curr->left;
    }
    return curr;
}

Node* DeleteNode(Node* root, int x){
    if(root == NULL){
        return NULL;
    }

    if(root->key > x){
        root->left = DeleteNode(root->left, x);
    }else if(root->key < x){
        root->right = DeleteNode(root->right, x);
    }else{   // (root->key == x)
        if(root->left == NULL){ // this also consider the case for LEAF Node deletion.
            Node* temp = root->right;
            delete root;
            return temp;
        }else if(root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }else{ // if node we are deleting is NON_LEAF Node
            Node* succ = getSuccessor(root);
            root->key = succ->key;
            root->right = DeleteNode(root->right, succ->key);
        }
    }
    return root;
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

     

    return 0;
}
