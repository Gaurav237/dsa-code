#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


class Solution {
  public:
  
    int inorderBST(Node* root, int &K){
        if(root == NULL)
            return -1;
            
        int left = inorderBST(root->left, K);
        if(left != -1)
            return left;
            
        K--;
        if(K == 0){ return root->data; }
        
        return inorderBST(root->right, K);
    }
    
    // Return the Kth smallest element in the given BST
    int KthSmallestElement(Node *root, int K) {
        // add code here.
        return inorderBST(root, K);
    }

    // int KthLargestElement(Node* root, int K){
    //     /* Kth largest = (N - K)th smallest  */
    //     int N = countTotalNodes(root);
    //     return inorderBST(Node* root, N - K);
    // }
};