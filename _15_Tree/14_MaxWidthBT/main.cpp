
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

int MaxWidth(Node *root){
    if(root == NULL){
        return 0;
    }
    queue<Node*> q;
    int maxCount = 0;
    int count = 0;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* curr = q.front();
        q.pop();

        if(curr == NULL){
            maxCount = max(count,maxCount);
            count = 0;
            if(q.size() == 0){
                break;
            }
            q.push(NULL);
            continue;
        }
        count++;

        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL) {
            q.push(curr->right);
        }
    }

    return maxCount;
}


int main() {
    Node *root = new Node(10);
    root->left = new Node(20);
//    root->left->right = new Node(40);
    root->left->left = new Node(80);
    root->left->left->left = new Node(20);
//    root->left->right->right = new Node(10);
    root->right = new Node(30);
    root->right->left = new Node(50);
    root->right->right = new Node(60);
//    root->right->right->left = new Node(6);

    cout << MaxWidth(root);

    return 0;
}
