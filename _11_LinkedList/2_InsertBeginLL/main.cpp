// Insert at Beginning of LL.

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
    while(curr != NULL){
        cout << curr->data << " ";
        curr = curr->next;
    }
}

void insertAtBegin(Node* &head, int key){
    Node* temp = new Node(key);
    temp->next = head;
    head = temp;
}


int main() {
   Node* head = new Node(10);
   Node* temp1 = new Node(20);
   Node* temp2 = new Node(30);
   head->next = temp1;
   temp1->next = temp2;

    // Node* head = NULL;

    printList(head);
   cout << endl;
    insertAtBegin(head,5);
    printList(head);


    return 0;
}
