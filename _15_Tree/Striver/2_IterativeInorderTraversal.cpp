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

void Inorder(Node *root){
    if(root == NULL){
        return;
    }

    Node* curr = root;
    stack<Node*> st;
    while(true){
        if(curr != NULL){
            st.push(curr);
            curr = curr->left;
        }else{
            if(st.empty()) break;

            curr = st.top();
            st.pop();
            cout << curr->key << " ";

            curr = curr->right;
        }
    }
}

int main() {
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);

    Inorder(root);

    return 0;
}
