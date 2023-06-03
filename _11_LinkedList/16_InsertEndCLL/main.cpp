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

// Time : O(n)
Node* insertEnd(Node* head, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        temp->next = temp;
        return temp;
    }

    Node* curr = head;
    while(curr->next != head){
        curr = curr->next;
    }   
    Node* temp = new Node(d);
    curr->next = temp;
    temp->next = head;
    return head;
}

// Time : O(1)
Node* insertEnd2(Node* head, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        temp->next = temp;
        return temp;
    }

    // 1. insert after head
    Node* temp = new Node(d);
    temp->next = head->next;
    head->next = temp;
    // 2. swap head & newNode(i.e. temp)
    int x = head->data;
    head->data = d;  // temp->data
    temp->data = x;
    // 3. return temp, which will be node containing value x, i.e head
    head = head->next;
    return head;
}   

int main(){
    Node* head = new Node(10);
    // head->next = head;
    head->next = new Node(5);
    head->next->next = new Node(20);
    head->next->next->next = new Node(15);
    head->next->next->next->next = head;

    head = insertEnd2(head, 1);
    printList(head);
    
    return 0;
}