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

void IterPreorder(Node *root){
    if(root == NULL){
        return;
    }

    stack<Node*> st;
    st.push(root);

    while(!st.empty()){
        Node* curr = st.top();
        st.pop();
        cout << curr->key << " ";

        if(curr->right != NULL)
            st.push(curr->right);

        if(curr->left != NULL) 
            st.push(curr->left);
    }
}


int main() {
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);

    IterPreorder(root);

    return 0;
}
