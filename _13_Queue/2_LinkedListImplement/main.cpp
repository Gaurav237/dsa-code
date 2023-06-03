#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = nullptr;
    }
};

class Queue{
    Node *head;
    Node *tail;
    int size;
public:
    Queue(){
        head = nullptr;
        tail = nullptr;
        size = 0;
    }
    void enqueue(int x){
        Node* temp = new Node(x);
        size++;
        if(head == nullptr){
            head = tail = temp;
            return;
        }
        tail->next = temp;
        tail = temp;
    }
    void dequeue(){
        if(head == nullptr){
            return;
        }
        Node *temp = head;
        head = head->next;
        if(head == nullptr){  // when only 1 node is there.
            tail = nullptr;
        }
        size--;
        delete temp;
    }
    int getSize(){
        return size;
    }
    Node* getFront(){
        return head;
    }
    Node* getRear(){
        return tail;
    }
};


int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.dequeue();
    cout << q.getSize() << endl;

    Node *t = q.getFront();
    while(t != nullptr){
        cout << t->data << " ";
        t = t->next;
    }

    return 0;
}
