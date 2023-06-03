// Implementing Two Stacks in a Single Array.
 
#include <bits/stdc++.h>
using namespace std;

class TwoStacks{
private:
    int *arr;
    int capacity;
    int top1;
    int top2;
public:
    TwoStacks(int n){
        capacity = n;
        arr = new int[n];
        top1 = -1;
        top2 = capacity;
    }
    void push1(int x){
        if(top1 < top2 - 1){
            top1++;
            arr[top1] = x;
        }else{
            cout << "Overflow" << endl;
        }
    }
    void push2(int x){
        if(top1 < top2 - 1){
            top2--;
            arr[top2] = x;
        }else{
            cout << "Overflow" << endl;
        }
    }
    int pop1(){
        if(top1 > -1){
            int x = arr[top1];
            top1--;
            return x;
        }else{
            cout << "Underflow" << endl;
            return INT_MAX;
        }
    }
    int pop2(){
        if(top2 < capacity){
            int x = arr[top2];
            top2++;
            return x;
        }else{
            cout << "Underflow" << endl;
            return INT_MAX;
        }
    }
    int size1() const{
        return top1 + 1;
    }
    int size2() const{
        return top2 + 1;
    }
    int Top1() const{
        return arr[top1];
    }
    int Top2() const{
        return arr[top2];
    }

};

int main() {
    TwoStacks ts(10);

    return 0;
}