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

void printList(Node* head){
    Node* curr = head;
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

// Naive 
// Time: O(n)
// Space: O(1)
Node* reverseLL(Node* head){
    stack<int> st;
    Node* curr = head;
    while(curr != NULL){
        st.push(curr->data);
        curr = curr->next;
    }

    curr = head;
    while(!st.empty()){
        curr->data = st.top();
        st.pop();
        curr = curr->next;
    }
    return head;
}

// EFFICIENT
// Time: O(N)
// Space: O(1)
// logic: changing the links
Node* reverseLL2(Node* head){

    Node* prevNode = NULL;
    Node* curr = head;

    while(curr != NULL){
        Node* nextNode = curr->next;
        curr->next = prevNode;
        prevNode = curr;
        curr = nextNode;
    }

    return prevNode;
}


int main() { 
    Node* head = new Node(10);
    Node* temp1 = new Node(20);
    Node* temp2 = new Node(30);
    Node* temp3 = new Node(40);

    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;

    head = reverseLL2(head);
    printList(head);
    
    return 0;
}