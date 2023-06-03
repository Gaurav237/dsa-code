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

// Soln 1
// Time: O(n + m)
// Space: O(n)
Node* intersectionPoint(Node* h1, Node* h2){
    unordered_set<Node*> hmp;

    while(h1 != NULL){
        hmp.insert(h1);
        h1 = h1->next;
    }

    while(h2 != NULL){
        if(hmp.find(h2) != hmp.end()){
            return h2;
        }
        h2 = h2->next;
    }

    return NULL;
}

// Soln 2
// Time: O(n + m)
// Space: O(1)
int intersectionPoint2(Node* head1, Node* head2){
    // 1. Count nodes in both the lists
    int count1 = 0;
    Node* curr1 = head1;
    while(curr1 != NULL){
        count1++;
        curr1 = curr1->next;
    }

    int count2 = 0;
    Node* curr2 = head2;
    while(curr2 != NULL){
        count2++;
        curr2 = curr2->next;
    }

    // 2. Traverse the bigger list = abs(count1 - count2) times
    curr1 = head1;
    curr2 = head2;
    int times = abs(count1 - count2);
    if(count1 >= count2){
        while(times > 0){
            curr1 = curr1->next;
        }
    }else{
        while(times > 0){
            curr2 = curr2->next;
        }
    }

    // 3. Traverse both LL simultaneously
    while(curr1 != NULL && curr2 != NULL){
        if(curr1 == curr2){
            return curr1->data;
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }

    return -1;
}

int main() {
    Node* head = new Node(5);
    head->next = new Node(8);
    head->next->next = new Node(7);
    head->next->next->next = new Node(10);
    head->next->next->next->next = new Node(12);
    head->next->next->next->next->next = new Node(15);
    Node* head2 = new Node(9);
    head2->next = head->next->next->next;
    
    printList(head);
    printList(head2);
    int val = intersectionPoint2(head, head2);
    // cout << val << endl;

    return 0;
}
