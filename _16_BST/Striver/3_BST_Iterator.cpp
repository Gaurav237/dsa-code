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

class BSTIterator{
    stack<Node*> st;
public:
    BSTIterator(Node* root){
        pushAll(root);
    }

    bool hasNext(){
        return !st.empty();
    }

    int next(){
        Node* temp = st.top();
        st.pop();
        pushAll(temp->right);
        return temp->key;
    }

private:
    void pushAll(Node* node){
        while(node != NULL){
            st.push(node);
            node = node->left;
        }
    }
};

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
