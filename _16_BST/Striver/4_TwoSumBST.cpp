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

// it has both next and before code
class BSTIterator{
    stack<Node*> st;
    
    /*
        reverse = true => before()
        reverse = false => next()
    */
    bool reverse = true;
public:
    BSTIterator(Node* root, bool isReverse){
        reverse = isReverse;
        pushAll(root);
    }

    bool hasNext(){
        return !st.empty();
    }

    int next(){
        Node* temp = st.top();
        st.pop();
        if(reverse = false){
            pushAll(temp->right);
        }else{
            pushAll(temp->left);
        }
        return temp->key;
    }

private:
    void pushAll(Node* node){
        while(node != NULL){
            st.push(node);
            if(reverse = true){
                node = node->right;
            }else{
                node = node->left;
            }
        }
    }
};

bool findTarget(Node* root, int k){
    if(root == NULL) return false;

    BSTIterator l(root, false);
    BSTIterator r(root, true);

    int i = l.next();
    int j = r.next();  // r.before()

    while (i < j){
        int sum = i + j;
        if(sum == k){
            return true;
        }else if(sum < k){
            i = l.next();
        }else{
            j = r.next();
        }
    }
    
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
