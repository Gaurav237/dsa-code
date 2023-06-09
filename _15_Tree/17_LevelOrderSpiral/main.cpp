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



// using Two Stacks 
void printSpiral(Node* root){
    stack<Node*> s1;
    stack<Node*> s2;

    s1.push(root);

    while(!s1.empty() || !s2.empty()){
        while(!s1.empty()){
            Node* curr = s1.top();
            s1.pop();

            cout << curr->key << " ";

            if(curr->left != NULL){
                s2.push(curr->left);
            }
            if(curr->right != NULL){
                s2.push(curr->right);
            }
        }

        while(!s2.empty()){
            Node* curr = s2.top();
            s2.pop();

            cout << curr->key << " ";

            if(curr->right != NULL){
                s1.push(curr->right);
            }
            if(curr->left != NULL){
                s1.push(curr->left);
            }
        }
    }

}

int main() {
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left = new Node(8);
    root->left->left->right = new Node(9);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->left->left = new Node(10);
    root->right->left->right = new Node(11);

    /*
                     1
            2                3
        4      5         6       7
      8   9           10   11
    
    */

    printSpiral(root);

    return 0;
}
