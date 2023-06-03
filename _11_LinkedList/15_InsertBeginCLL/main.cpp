#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int d){
        data = d;
        next = NULL;
    }
};

void printList(Node* head){
    if(head == NULL) return; 

    Node* curr = head;
    do{
        cout << curr->data << " ";
        curr = curr->next;
    }while(curr != head);

    cout << "\n";
}

// soln 1 
// Time: O(n)
// logic: using traversal
Node* insertBegin(Node* head, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        temp->next = temp;
        return temp;
    }


    Node* tail = head;
    while(tail->next != head){
        tail = tail->next;
    }
    Node* temp = new Node(d);
    tail->next = temp;
    temp->next = head;
    // head = temp;
    // return head;
    return temp;
}

// soln 2
// Time: O(1)
// logic: insert new node after head, then swap head & new Node
Node* insertBegin2(Node* head, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        temp->next = temp;
        return temp;
    }

    Node* temp = new Node(d);
    temp->next = head->next;
    head->next = temp;
    // now swap values
    int x = head->data;
    head->data = d;  // temp->data
    temp->data = x;

    return head;
}


int main(){
    Node* head = new Node(10);
    // head->next = head;
    head->next = new Node(5);
    head->next->next = new Node(20);
    head->next->next->next = new Node(15);
    head->next->next->next->next = head;
    
    head = insertBegin(head, 1);
    printList(head);

    return 0;
}