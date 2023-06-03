// size() => calculates total no. of nodes present

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

// time => O(n)
int  size(Node* root){
    if(root == NULL){
        return 0;
    }
    return size(root->left) + size(root->right) + 1;
}


int main() {
    Node *root = new Node(10);
    root->left = new Node(15);
    root->right = new Node(20);
    root->left->left = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    root->right->left->left = new Node(60);
    root->right->left->right = new Node(70);

    cout << size(root);

    /*
     *             10
     *      15            20
     *   30    N       40      50
     *  N  N         60  70   N  N
     */

    return 0;
}
