#include <iostream>
using namespace std;

// array implementation : is not dynamic.
class myStack{
private:
    int *arr;
    int capacity;
    int top;
public:
    myStack(int c){
        capacity = c;
        arr = new int[capacity];
        top = -1;
    }
    void push(int x){
        if(size() == capacity){
            cout << "OverFlow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    int pop(){
        if(top < 0){
            cout << "Underflow" << endl;
            return -1;
        }
        int res = arr[top];
        top--;
        return res;
    }
    int peek() const{
        if(top < 0){
            return -1;
        }
        return arr[top];
    }
    int size() const{
        return top + 1;
    }
    bool isEmpty() const{
        return (top == -1);
    }

};

int main() {
    myStack s(5);
    s.push(5);
    s.push(10);
    s.push(20);
    cout << s.pop() << endl;
    cout << s.size() << endl;
    cout << s.isEmpty() << endl;

    return 0;
}
