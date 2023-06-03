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

int Height(Node *root){
    if(root == nullptr){
        return 0;
    }
    return max(Height(root->left),Height(root->right)) + 1;
}

// Naive Solution
// Time => O(n^2)
bool isBalanced(Node* root){
    if(root == NULL){
        return true;
    }

    int hl = 0,hr = 0;
    if(root->left != NULL){
        hl = Height(root->left);
    }
    if(root->right != NULL){
        hr = Height(root->right);
    }

    return (abs(hl-hr) <= 1) && isBalanced(root->left) && isBalanced(root->right);
}

// Efficient
// Time: O(n)
bool isBalanced(Node* root){
    
}

int main() {
    Node *root = new Node(3);
    root->left = new Node(4);
    root->left->left = new Node(5);
    root->left->right = new Node(9);
    root->left->right->left = new Node(20);
    root->left->right->right = new Node(10);
    root->right = new Node(8);
    root->right->left = new Node(7);
//    root->right->right->left = new Node(6);

    cout << boolalpha << isBalanced(root);

    return 0;
}
