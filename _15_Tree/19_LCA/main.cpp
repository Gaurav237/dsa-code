#include <bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;

    Node(int k){
        key = k;
        left = right = nullptr;
    }
};

bool findPath(Node* root, vector<Node*> &path, int n){
    if(root == NULL){
        return false;
    }
    path.push_back(root);
    if(root->key == n){
        return true;
    }
    if(findPath(root->left, path, n) || findPath(root->right, path, n)){
        return true;
    }
    path.pop_back();
    return false;
}

void LCA(Node* root, int n1, int n2){

}

int main() {
    Node *root = new Node(10);
    root->left = new Node(50);
    root->right = new Node(60);
    root->left->left = new Node(70);
    root->left->right = new Node(20);
    // root->left->left->left = new Node(40);
    // root->left->left->left->left = new Node(60);
    // root->left->left->right = new Node(50);
    root->left->right->right = new Node(80);
    // root->right->right = new Node(80);
    root->left->right->left = new Node(90);
    root->left->right->left->left = new Node(30);

    LCA(root,n1,n2);

    return 0;
}
