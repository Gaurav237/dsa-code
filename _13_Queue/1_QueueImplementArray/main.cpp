#include <iostream>
using namespace std;

class Queue{
    int *arr;
    int front;
    int rear;
    int capacity;
    int size;
public:
    Queue(int n){
        capacity = n;
        arr = new int[n];
        front = 0;
        size = 0;
    }
    bool isFull(){
        return (size == capacity);
    }
    bool isEmpty(){
        return (size == 0);
    }
    int getFront(){
        if(isEmpty()){
            return -1;
        }
        return front;
    }
    int getRear(){
        if(isEmpty()){
            return -1;
        }
        return (front + size - 1) % capacity;
    }
    void enqueue(int x){
        if(isFull()){
            return;
        }
        rear = getRear();
        rear = (rear + 1) % capacity;
        arr[rear] = x;
        size++;
    }
    void dequeue(){
        if(isEmpty()){
            return;
        }
        front = (front + 1) % capacity;
        int x = arr[front];
        size--;
    }

};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
