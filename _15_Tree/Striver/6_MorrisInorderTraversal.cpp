#include <bits/stdc++.h>
using namespace std;

struct node {
  int data;
  struct node * left, * right;
};

vector < int > inorderTraversal(node * root) {
    vector<int> inorder;
    node* curr = root;
    while(curr != NULL){
        // case 1
        if(curr->left == NULL){
            inorder.push_back(curr->data);
            curr = curr->right;
        }else{
            node* temp = curr->left;
            while(temp->right != NULL && temp->right != curr){
                temp = temp->right;
            }

            // case 2
            if(temp->right == NULL){
                temp->right = curr;
                // inorder.push_back(curr->data);  // ** for preorder traversal
                curr = curr->left;
            }else if(temp->right == curr){  // case 3
                temp->right = NULL;
                inorder.push_back(curr->data);  // for inorder traversal
                curr = curr->right;
            }
        }
    }
    return inorder;
}

struct node * newNode(int data) {
  struct node * node = (struct node * ) malloc(sizeof(struct node));
  node -> data = data;
  node -> left = NULL;
  node -> right = NULL;

  return (node);
}

int main() {

  struct node * root = newNode(1);
  root -> left = newNode(2);
  root -> right = newNode(3);
  root -> left -> left = newNode(4);
  root -> left -> right = newNode(5);
  root -> left -> right -> right = newNode(6);

  vector < int > inorder;
  inorder = inorderTraversal(root);

  cout << "The Inorder Traversal is: ";
  for (int i = 0; i < inorder.size(); i++) {
    cout << inorder[i] << " ";
  }

  return 0;
}