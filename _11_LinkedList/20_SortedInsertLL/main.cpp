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
    cout << "\n";
}

// function : Sorted Insert in a Linked List
Node* sortedInsert(Node* head, int d){
    Node* temp = new Node(d);

    if(head == NULL){
        return temp;
    }

    if(d < head->data){
        temp->next = head;
        return temp;
    }

    Node* curr = head;
    while(curr->next != NULL && curr->next->data < d){
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}


int main() {
    Node* head = new Node(10);
    Node* temp1 = new Node(20);
    Node* temp2 = new Node(30);
    Node* temp3 = new Node(40);

    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;

    head = sortedInsert(head, 15);
    printList(head);

    
    return 0;
}