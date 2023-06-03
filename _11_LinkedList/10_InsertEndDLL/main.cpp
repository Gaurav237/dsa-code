#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;
    Node(int d){
        data = d;
        prev = next = NULL;
    }
};

void printList(Node* head){
    Node* curr = head;
    while(curr != NULL){
        cout << curr->data << " ";
        curr = curr->next;
    }
}

Node* insertEnd(Node* head, int d){
    if(head == NULL){
        return new Node(d);
    }

    Node* curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    Node* temp = new Node(d);
    curr->next = temp;
    temp->prev = curr;
    return head;
}

int main() {
    Node* head = new Node(10);
    Node* temp1 = new Node(20);
    Node* temp2 = new Node(30);

    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;

    // printList(head);
    head = insertEnd(head, 2);
    printList(head);

    return 0;
}
