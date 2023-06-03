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


// soln 2
// Time : O(1)
// logic: using swapping, then we can delete the next node of head in O(1) time
Node* deleteHead2(Node* head){
    if(head == NULL){
        return NULL;
    }else if(head->next = head){
        delete head;
        return NULL;
    }else{
        // 1. store next node value in head node
        int x = head->next->data;
        head->data = x;

        // 2. now delete next node of head
        Node* curr = head->next;
        head->next = head->next->next;
        delete curr;
        return head;
    }
}

Node* deleteKthNode(Node* head, int K){
    if(head == NULL){
        return head;
    }

    if(K == 1){
        return deleteHead2(head);
    }

    Node* curr = head;
    for(int i = 1; i <= K-2; i++){
        curr = curr->next;
    }
    Node* temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;
}

int main(){
    Node* head = new Node(10);
    // head->next = head;
    head->next = new Node(5);
    head->next->next = new Node(20);
    head->next->next->next = new Node(15);
    head->next->next->next->next = head;

    head = deleteHead2(head);
    printList(head);

    return 0;
}