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

int Height(Node *root){
    if(root == nullptr){
        return 0;
    }
    return max(Height(root->left),Height(root->right)) + 1;
}

 
 int main() {
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);

    cout << Height(root);

    return 0;
}
