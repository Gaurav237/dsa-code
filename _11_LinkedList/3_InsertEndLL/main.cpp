/*#include <bits/stdc++.h>
using namespace std;
class qeue{
    public:
    int size,front,rear;
    int *arr;
    qeue(int s){
        front = rear = 0;
        size = s;
        arr = new int[s];
    }
    void enque(int val)
    {
        if(rear == size){
            cout << "full";
            return;
        }
        else{
            arr[rear] = val;
            rear++;
        }
        return;
    };
    int deque(){
        if(front == rear){
            cout << "empty";
        }else{
            for(int i = front; i < rear; i++){
                arr[i] = arr[i + 1];
            }
            rear--;
        }
        return arr[front - 1] ;
    };
    void display(){
        if(front == rear){
            cout << "empty";
            return;
        }else {
            for (int i = front; i < rear; i++){
                cout << arr[i] << "<--";
            }
        }
    }
};

int main(){
    qeue q(4);
    q.enque(5);
    q.enque(3);
    q.enque(6);
    q.enque(7);
    q.deque();
    q.display();
}
*/

#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
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

void insertAtEnd(Node* &head, int k){
    if(head == nullptr){ 
        head = new Node(k); 
        return;
    }

    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = new Node(k);
}

int main(){
    Node* head = new Node(10);
    Node* temp1 = new Node(20);
    Node* temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;

    insertAtEnd(head, 40);
    printList(head);

    return 0;
}
