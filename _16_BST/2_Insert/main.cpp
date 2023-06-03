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

void LevelOrder(Node *root){
    if(root == NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(q.size() > 1){
        Node* curr = q.front();
        q.pop();
        if(curr == NULL){
            cout << "\n";
            q.push(NULL);
            continue;
        }
        cout << curr->key << " ";
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
}

// Iterative
// Time Complexity => O(h)
// Auxiliary Space => O(1)
bool insert(Node* root, int x) {
    // this is when NO Binary Tree has been created, so (root == NULL)
    if(root == NULL){
        Node* temp = new Node(x);
        root = temp;
    } // ...

    Node *leafNode = NULL;
    while (root != NULL) {
        leafNode = root;
        if (root->key == x) {
            return false;
        }else if (root->key > x) {
            root = root->left;
        }else {
            root = root->right;
        }
    }
    // root ==  NULL
    Node *temp = new Node(x);
    if (leafNode->key > x) {
        leafNode->left = temp;
    }else{
        leafNode->right = temp;
    }

    return true;
}

// Recursive
// Time Complexity => O(h)
// Auxiliary Space => O(h)
Node* RecInsert(Node* root, int x){
    if(root == NULL){
        return new Node(x);
    }else if(root->key > x){
        root->left = RecInsert(root->left, x);
    }else if(root->key < x){
        root->right = RecInsert(root->right, x);
    }
    return root;
}

int main() {
    Node* root = new Node(10);
    Node* t1 = new Node(5);
    Node* t2 = new Node(3);
    Node* t3 = new Node(15);
    Node* t4 = new Node(12);
    Node* t5 = new Node(18);
//    Node* t6 = new Node(16);
    root->left = t1;
    root->left->left = t2;
    root->right = t3;
    root->right->left = t4;
    root->right->right = t5;
//    root->right->left->left = t6;

//    LevelOrder(root);
    cout << boolalpha << insert(root,4) << endl;
    LevelOrder(root);

    return 0;
}
