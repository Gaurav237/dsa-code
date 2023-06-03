// Insert at the End of LL.

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

void DeleteLast(Node* &head){
    if(head == NULL){
        return;
    }
    
    if(head->next == NULL){
        delete head;
        head = NULL;
    }else{
        Node* curr = head;
        Node* prev = NULL;
        while(curr->next != NULL){
            prev = curr;
            curr = curr->next;
        }
        prev->next = NULL;
        delete curr;
    }
}

int main() {
    Node* head = new Node(10);
    Node* temp1 = new Node(20);
    Node* temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;

//    Node* head = NULL;

    printList(head);
    cout << "\n--";
    DeleteLast(head);
    printList(head);

    return 0;
}
