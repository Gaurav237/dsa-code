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

bool isCSP(Node *root){
    if(root == NULL){
        return true;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* curr = q.front();
        q.pop();

        if(curr->left == NULL && curr->right != NULL){
            if(curr->right->key != curr->key){
                return false;
            }
        }else if(curr->left != NULL && curr->right == NULL){
            if(curr->left->key != curr->key){
                return false;
            }
        }else if(curr->left != NULL && curr->right != NULL) {
            if (curr->left->key + curr->right->key != curr->key) {
                return false;
            }
        }

        /* push child nodes of current node */
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
    
    return true;
}

bool RecIsCSP(Node* root){
    if(root == NULL) {
        return true;
    }
    if(root->left == NULL && root->right == NULL) {
        return true;
    }
    int sum = 0;
    if(root->left != NULL) {sum += root->left->key;}
    if(root->right != NULL) {sum += root->right->key;}

    return ((root->key == sum) && RecIsCSP(root->left) && RecIsCSP(root->right));
}

int main() {
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->left->left = new Node(3);
    root->left->right = new Node(5);

//    Node *root = new Node(3);
//    root->left = new Node(1);
//    root->right = new Node(2);
//    root->right->left = new Node(1);
//    root->right->right = new Node(2);

//    Node *root = new Node(2);
//    root->right = new Node(2);
//    root->right->left = new Node(2);

    cout << boolalpha << RecIsCSP(root);

    /*
     *             20
     *      8            12
     *    3   5         N  N
     */

    return 0;
}
