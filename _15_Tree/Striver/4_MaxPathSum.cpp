#include <bits/stdc++.h>

using namespace std;

struct node {
  int data;
  struct node * left, * right;
};

int findMaxPathSum(node * root, int & maxi) {
  if (root == NULL) return 0;

  int leftMax = max(0, findMaxPathSum(root -> left, maxi));
  int rightMax = max(0, findMaxPathSum(root -> right, maxi));
  
  maxi = max(maxi, (root->data + leftMax + rightMax));
  
  return root->data + max(leftMax, rightMax);
}

int maxPathSum(node * root) {
  int maxi = INT_MIN;
  findMaxPathSum(root, maxi);
  return maxi;

}

struct node * newNode(int data) {
  struct node * node = (struct node * ) malloc(sizeof(struct node));
  node -> data = data;
  node -> left = NULL;
  node -> right = NULL;

  return (node);
}

int main() {

  struct node * root = newNode(-10);
  root -> left = newNode(9);
  root -> right = newNode(20);
  root -> right -> left = newNode(15);
  root -> right -> right = newNode(7);

  int answer = maxPathSum(root);
  cout << "The Max Path Sum for this tree is " << answer;

  return 0;
}