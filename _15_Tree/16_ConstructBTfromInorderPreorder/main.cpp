// Construct Binary Tree from Preorder and Inorder.

#include <bits/stdc++.h>
using namespace std;

struct Node{
    Node *left;
    int key;
    Node *right;

    Node(int k){
        key = k;
        left = right = NULL;
    }
};

Node* buildTree(int in[], int pre[], int start, int end){
    static int preIndex = 0;
    
    if(start > end){
        return NULL;
    }

    // preorder first element gives root of BT
    /* Pick current node from Preorder
    traversal using preIndex
    and increment preIndex */
    Node* root = new Node(pre[preIndex++]);

    /* find the index of this node in Inorder traversal */
    int inIndex = 0;
    for(int i = start; i <= end; i++){
        if(in[i] == root->key){
            inIndex = i;
            break;
        }
    }
 
    /* Call buildTree for elements before inIndex and make
     the built tree as a left subtree of root. */
    root->left = buildTree(in, pre, start, inIndex-1);

    /* Call buildTree for elements after inIndex and make 
    the built tree as a right subtree of root. */
    root->right = buildTree(in, pre, inIndex+1, end);

    return root;
}

void Inorder(Node* root){
    if(root != NULL){
        Inorder(root->left);
        cout << root->key << " ";
        Inorder(root->right);
    }
}

int main() {
    int in[] = {40,20,60,50,70,10,80,100,30};
    int pre[] = {10,20,40,50,60,70,30,80,100};
    int n = 9;

    Node* root = buildTree(in, pre, 0, n-1);

    Inorder(root);

    return 0;
}
