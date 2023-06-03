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
    cout << "\n";
}

Node* reverseK(Node* head, int K){
    Node* curr = head;
    Node* prevNode = NULL;
    Node* nextNode = NULL;

    int count = 0;
    while(curr != NULL && count < K){
        nextNode = curr->next;
        curr->next = prevNode;
        prevNode = curr;
        curr = nextNode;
        count++;
    }

    if(nextNode != NULL){
        Node* restHead = reverseK(nextNode, K);
        head->next = restHead;
    }

    return prevNode;  // prevNode is new Head
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);
    head->next->next->next->next->next->next = new Node(70);

    printList(head);
    head = reverseK(head, 3);
    printList(head);

    return 0;
}
