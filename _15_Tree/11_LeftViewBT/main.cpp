#include <bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int k){
        key = k;
        left = right = NULL;
    }
};

int maxLevel = 0;
void printLeft(Node* root,int level){
    if(root == NULL){
        return;
    }
    if(level > maxLevel){
        cout << root->key << " ";
        maxLevel = level;
    }
    printLeft(root->left, level + 1);
    printLeft(root->right, level+ 1);
}

// Method 1:
void RecLeftView(Node* root){
    printLeft(root, 1);
}

//  Method 2:
void LeftView(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    cout << root->key << " ";
    while(q.size() > 1){
        Node* curr = q.front(); 
        q.pop();
        if(curr == NULL){
            cout << q.front()->key << " ";  /* print element next to NULL */
            q.push(NULL);
            continue;
        }
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
}

int main() {
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
//    root->right->left = new Node(40);
    root->right->right = new Node(60);
//    root->right->left->left = new Node(60);
//    root->right->left->right = new Node(70)
    root->left->left->left = new Node(90);

    // RecLeftView(root);
    LeftView(root);

    /*
     *             10
     *      20            30
     *   40    50       N     60
     * 90  N  N  N           N  N
     */

    return 0;
}