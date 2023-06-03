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

// using Two Stacks
// time: O(n)
// space: O(2 * n)
vector<int> PostOrder_1(Node *root){
    vector<int> ans;
    if(root == NULL){
        return ans;
    }

    stack<Node*> s1, s2;
    s1.push(root);

    while(!s1.empty()){

        Node* curr = s1.top();
        s1.pop();
        s2.push(curr);

        if(curr->left != NULL)  
            s1.push(curr->left);
        
        if(curr->right != NULL) 
            s1.push(curr->right);
    }

    while(!s2.empty()){
        ans.push_back(s2.top()->key);
        s2.pop();
    }

    return ans;
}

// using One Stack
// time: O(n)
// space: O(n)
vector<int> PostOrder_2(Node* root){
    vector<int> ans;
    if(root == NULL){
        return ans;
    }

    stack<Node*> st;
    Node* curr = root;
    
    while(!st.empty() || curr != NULL){
        if(curr != NULL){
            st.push(curr);
            curr = curr->left;
        }else{
            Node* temp = st.top()->right;
            if(temp != NULL){
                curr = temp;
            }else{  // temp == NULL 
                temp = st.top();
                st.pop();
                ans.push_back(temp->key);

                while(!st.empty() && temp == st.top()->right){
                    temp = st.top();
                    st.pop();
                    ans.push_back(temp->key);
                }
            }
        }
    }

    return ans;
}


int main() {
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);

    vector<int> ans = PostOrder_1(root);
    for(int e : ans){
        cout << e << " ";
    }

    return 0;
}
