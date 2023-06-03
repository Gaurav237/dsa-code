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
// requires 2 traversal
// incomplete
Node* segregateEvenOdd(Node* head){
    // Move a pointer to Tail
    Node* tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }

    // Now add odd nodes at tail
    Node* odd = tail;
    Node* curr = head;
    Node* prev = NULL;
    while(curr->data % 2 != 0 && curr != tail){
        odd->next = curr;
        odd = odd->next;
        odd->next->next = NULL;
        curr = curr->next;
    }

    /* Do following steps only if
	there is any even node */
    if(curr->data % 2 == 0){
        /* Change the head pointer to
		point to first even node */
        head = curr;

        while(curr != tail){
            if(curr->data % 2 == 0){
                prev = curr;
                curr = curr->next;
            }else{
                /* break the link between
				prev and current */
                prev->next = curr->next;

                /* Make next of curr as NULL */
                curr->next = NULL;

                /* Move curr to end */
                odd->next = curr;

                /* make curr as new end */
                odd = curr;   // OR: odd = odd->next;

                /* update curr pointer to next of moved node */
                curr = prev->next;
            }
        }
    }

    return head;
}

//Soln 2
// requires 1 traversal
Node* segregateEvenOdd2(Node* head){
    Node* evenStart = NULL;
    Node* evenEnd = NULL;
    Node* oddStart = NULL;
    Node* oddEnd = NULL;

    // Node to traverse the list.
    Node* curr = head;

    while(curr != NULL){
        int val = curr->data;

        // If current value is even, add it to even values list.
        if(val % 2 == 0){
            if(evenStart == NULL){
                evenStart = evenEnd = curr;
            }else{
                evenEnd->next = curr;
                evenEnd = evenEnd->next;
            }
        }else{  // If current value is odd, add it to odd values list.
            if(oddStart == NULL){
                oddStart = oddEnd = curr;
            }else{
                oddEnd->next = curr;
                oddEnd = oddEnd->next;
            }
        }
    }

    // If no change is required as all elements are either even or odd.
    if(oddStart == NULL || evenStart == NULL){
        return head;
    }else{
        // Join odd after even LL
        evenEnd->next = oddStart;
        oddEnd->next = NULL;
        return evenStart;
    }
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
    head = segregateEvenOdd(head);
    printList(head);

    return 0;
}
