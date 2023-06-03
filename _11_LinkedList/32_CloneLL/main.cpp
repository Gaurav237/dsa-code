#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node* random;
    Node(int d){
        data = d;
        next = nullptr;
        random = nullptr;
    }
};

void printList(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        if(head->random != NULL){
            cout << " (R: " << head->random->data << ") "; 
        }else{
            cout << " (R: -1) ";
        }
        head = head->next;
    }
    cout << "\n";
}

Node* cloneLL(Node* head){
    // Step 1
    Node* iter = head;
    while(iter != NULL){
        Node* newNode = new Node(iter->data);
        newNode->next = iter->next;
        iter->next = newNode;

        iter = iter->next->next;
    }

    // Step 2
    iter = head;
    while(iter != NULL){
        if(iter->random != NULL){
            iter->next->random = iter->random->next;
        }

        iter = iter->next->next;
    }

    // Step 3
    Node* clonedHead = new Node(0);
    iter = head;
    Node* curr = clonedHead;  // points to cloned LL
    while(iter != NULL){
        Node* fast = iter->next->next;
        curr->next = iter->next;
        iter->next = fast;

        curr = curr->next;
        iter = fast;
    }

    return clonedHead->next;  // head of clone LL
}

int main() {
    Node* head = new Node(1);
    Node* temp1 = new Node(2);
    Node* temp2 = new Node(3);
    Node* temp3 = new Node(4);
    
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    
    head->random = temp3;
    temp1->random = head;
    temp2->random = NULL;
    temp3->random = temp1;

    printList(head);

    Node* clonedHead = cloneLL(head);

    printList(clonedHead);

    return 0;
}
