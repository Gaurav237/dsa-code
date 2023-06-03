// maximum element in the binary tree

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

// Iterative Solution
int MaximumElem(Node *root){
    if(root == NULL){
        return INT_MIN;
    }
    queue<Node*> q;
    q.push(root);
    int max = INT_MIN;
    while(!q.empty()){
        Node* curr = q.front();
        max = (curr->key > max)? curr->key : max;
        q.pop();
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
    return max;
}

/* recursive Solution */
/* 
Time Complexity : O(n)
Aux Space : O(n)
*/
/* start */

// short form
int RecMaximumElem(Node* root){
    if(root == NULL){
        return INT_MIN;
    }

    return max(root->key,max(RecMaximumElem(root->left), RecMaximumElem(root->right)));
}

// explained form
int recFindMax(Node* root){
    // Base case
    if (root == NULL)
        return INT_MIN;
 
    // Return maximum of 3 values:
    // 1) Root's data 2) Max in Left Subtree
    // 3) Max in right subtree
    int res = root->key;
    int lres = recFindMax(root->left);
    int rres = recFindMax(root->right);
    if (lres > res)
        res = lres;
    if (rres > res)
        res = rres;
    return res;
}

/* end */
int main() {
    Node *root = new Node(10);
    root->left = new Node(15);
    root->right = new Node(20);
    root->left->left = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    root->right->left->left = new Node(60);
    root->right->left->right = new Node(70);


    // cout << RecMaximumElem(root);
    // cout << recFindMax(root);

    /*
     *             10
     *      15            20
     *   30    N       40      50
     *  N  N         60  70   N  N
     */

    return 0;
}
