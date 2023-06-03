// Delete at the first of LL.

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

void DeleteHead(Node* &head){
    if(head == NULL){
        return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
}


int main() {
    Node* head = new Node(10);
    Node* temp1 = new Node(20);
    Node* temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;

//    Node* head = NULL;

    printList(head);
    cout << "\n";
    DeleteHead(head);
    printList(head);


    return 0;
}
