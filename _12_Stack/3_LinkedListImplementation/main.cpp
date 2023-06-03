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

class myStack{
private:
    Node *head = nullptr;
    int size = 0;
public:
//    myStack(){
//        head = nullptr;
//        size = 0;
//    }
    void push(int x){
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
        size++;
    }
    int pop(){
        if(head == nullptr){
            cout << "Underflow" << endl;
            return INT_MAX;
        }
        int x = head->data;
        Node *t = head;
        head = head->next;
        size--;
        delete t;
        return x;
    }
    int Size() const{
        return size;
    }
    int peek() const{
        if(head == nullptr){
            cout << "Underflow" << endl;
            return INT_MAX;
        }
        return head->data;
    }
    int isEmpty(){
        return (head == nullptr);
    }


};

int main() {
    myStack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.Size() << endl;
    cout << s.pop() << endl;
    cout << s.Size() << endl;
    cout << s.peek() << endl;


    return 0;
}
