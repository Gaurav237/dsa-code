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
    if(head == NULL) return; 

    Node* curr = head;
    do{
        cout << curr->data << " ";
        curr = curr->next;
    }while(curr != head);

    cout << "\n";
}


// function : Insert At Head of CDLL
Node* insertHead(Node* head, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }

    Node* temp = new Node(d);
    temp->prev = head->prev;
    temp->next = head;
    head->prev->next = temp;
    head->prev = temp;
    // => return new head
    // head = temp;
    // return head;
    return temp;
}


// function : Insert at End of CDLL
// logic: same code, just don't change the head pointer
Node* insertEnd(Node* head, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }

    Node* temp = new Node(d);
    temp->prev = head->prev;
    temp->next = head;
    head->prev->next = temp;
    head->prev = temp;
    return head;
}

int main(){
    Node* head = new Node(10);
    // head->next = head;
    Node* temp1 = new Node(5);
    Node* temp2 = new Node(20);
    Node* temp3 = new Node(15);
    
    head->prev = temp3;
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    temp2->next = temp3;
    temp3->prev = temp2;
    temp3->next = head;

    head = insertHead(head, 1);
    printList(head);

    return 0;
}