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

// Soln 1 (swap data)
void pairwiseSwap(Node* head){
    Node* curr = head;
    while(curr != NULL && curr->next != NULL){
        // swap data
        int x = curr->data;
        curr->data = curr->next->data;
        curr->next->data = x;

        // move curr pointer
        curr = curr->next->next;
    }   
}

// Soln 2 (change next Pointers)
// BETTER
Node* pairwiseSwap2(Node* head){
    if(head == NULL || head->next == NULL){ return head; }

    Node* prev = head;
    Node* curr = head->next;

    // update head
    head = curr;

    while(true){
        Node* nextNode = curr->next;
        // update curr->next as prev
        curr->next = prev;

        // update prev->next
        // If next NULL or next is the last node
        if(nextNode == NULL || nextNode->next == NULL){
            prev->next = nextNode;
            break;
        }

        // ELSE
        prev->next = nextNode->next;

        // update prev and curr pointers
        prev = nextNode;
        curr = nextNode->next;
    }

    return head;
}

int main() {
    Node* head = new Node(5);
    head->next = new Node(8);
    head->next->next = new Node(7);
    head->next->next->next = new Node(10);
    head->next->next->next->next = new Node(12);
    head->next->next->next->next->next = new Node(15);
    head->next->next->next->next->next->next = new Node(20);
    
    printList(head);
    head = pairwiseSwap2(head);
    printList(head);
    

    return 0;
}
