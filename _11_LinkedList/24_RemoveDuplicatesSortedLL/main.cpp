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

// note: this func never modifies the head node
// in case head and head->next are same, then it modifies head->next node 
void RemoveDuplicates(Node* head){
    Node* curr = head;
    while(curr != NULL && curr->next != NULL){
        if(curr->data == curr->next->data){
            Node* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }else{
            curr = curr->next;
        }
    }
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(20);
    head->next->next->next = new Node(30);
    head->next->next->next->next = new Node(30);

    RemoveDuplicates(head);
    printList(head);

    return 0;
}
