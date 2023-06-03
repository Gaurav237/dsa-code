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

int search(Node* head, int key){
    
    int pos = 1;
    Node* curr = head;
    while(curr != NULL){
        if(curr->data == key){
            return pos;
        }else{
            pos++;
            curr = curr->next;
        }
    }

    return -1;
}


int main() {
    Node* head = new Node(10);
    Node* temp1 = new Node(20);
    Node* temp2 = new Node(30);
    Node* temp3 = new Node(40);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;

//    printList(head);
//    cout << "\n";
    cout << search(head, 40) << endl;

    return 0;
}