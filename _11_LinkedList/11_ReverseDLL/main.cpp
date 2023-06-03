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

// logic: swap `prev` and `next` pointer of each node.
Node* reverse(Node* head){
    if(head != NULL || head->next == NULL){
        return head;
    }
    
    Node* temp = NULL;  // extra variable for swapping
    Node* curr = head;
    while(curr != NULL){
        // swap
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;

        // traverse
        curr = curr->prev;
    }
    // return head
    return temp->prev;
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
    head = reverse(head);
    printList(head);

    return 0;
}
