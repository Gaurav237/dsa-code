#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int d){
        data = d;
        left = right = NULL;
    }
};

// Intuition: RIGHT -> LEFT -> ROOT

// method 1 : Recursion
// TC : O(N)
// SC : O(N)
Node* prev_ = NULL;
void func1(Node* root){
    if(root == NULL)
        return;

    func1(root->right);
    func1(root->left);

    root->right = prev_;
    root->left = NULL;
    prev_ = root;
}

// method 2 : using stack
// TC : O(N)
// SC : O(N)
void func2(Node* root){
    stack<Node*> st;
    st.push(root);

    while(!st.empty()){
        Node* curr = st.top();
        st.pop();

        if(curr->right)
            st.push(curr->right);

        if(curr->left)
            st.push(curr->left);

        if(!st.empty())
            curr->right = st.top();

        curr->left = NULL;
    }
}

// method 3 : using Morris Traversal
// TC : O(N)
// SC : O(1)
void func3(Node* root){
    Node* curr = root;

    while(curr != NULL){
        if(curr->left != NULL){
            Node* prev = curr->left;
            while(prev->right != NULL){
                prev = prev->right;
            }

            prev->right = curr->right;
            curr->right = curr->left;
            curr->left = NULL;
        }
        curr = curr->right;
    }
}


int main(){


    return 0;
}