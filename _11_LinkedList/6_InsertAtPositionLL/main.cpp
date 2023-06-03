// Insert in LL.

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

// index starts with 1.
void Insert(Node* &head, int pos, int key){
    // head is changed
    if(pos == 1){
        Node* temp = new Node(key);
        temp->next = head;
        head = temp;
    }else{
        Node* curr = head;
        for(int i = 1; (i <= pos-2) && (curr != NULL); i++) {
            curr = curr->next;
        }
        // if position value greater than linked list size+1
        if(curr == NULL){
            return;
        }
        Node* temp = new Node(key);
        temp->next = curr->next;
        curr->next = temp;
    }
}

int main() {
    Node* head = new Node(10);
    Node* temp1 = new Node(20);
    Node* temp2 = new Node(30);
    Node* temp3 = new Node(40);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;

//    Node* head = NULL;

//    printList(head);
//    cout << "\n";
    Insert(head,1,70);
    printList(head);

    return 0;
}
