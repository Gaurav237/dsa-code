#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int d){
        data = d;
        next = nullptr;
    }
};

// Naive soln
// logic: using length
Node* NthEndNode(Node* head, int n){
    if(head == NULL){
        return 0;
    }

    int len = 0;
    for(Node* it = head; it != NULL; it = it->next){
        len++;
    }

    Node* curr = head;
    for(int i = 1; i < (len-n+1); i++){
        curr = curr->next;
    }

    return curr;
}

// Efficient Soln
// logic: using 2 Pointers
Node* NthEndNode2(Node* head, int n){
    if(head == NULL){
        return NULL;
    }

    Node* first = head;
    while(n > 0){
        // edge case
        // i.e. LL has less than N nodes
        if(first == NULL){ return NULL; }
        
        first = first->next;
        n--;
    }

    Node* second = head;
    while(first != NULL){
        first = first->next;
        second = second->next;
    }

    return second;
}

int main() {
    Node* head = new Node(10);
    Node* temp1 = new Node(20);
    Node* temp2 = new Node(30);
    Node* temp3 = new Node(40);

    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;

    Node* curr = NthEndNode2(head, 4);
    cout << curr->data << endl;
    
    return 0;
}