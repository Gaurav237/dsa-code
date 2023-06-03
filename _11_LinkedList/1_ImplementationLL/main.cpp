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

// Recursive Display of LL
void RecPrintList(Node* head){
    if(head == NULL){
        return;
    }
    cout << head->data << " ";
    RecPrintList(head->next);
}

int main() {
    Node* head = new Node(10);
    Node* temp1 = new Node(20);
    Node* temp2 = new Node(30);

    head->next = temp1;
    temp1->next = temp2;

    // RecPrintList(head);
    printList(head);
    printList(head);
    printList(head);
    
    return 0;
}
