#include <bits/stdc++.h>
using namespace std;

class MinHeap{
private:
    int *arr;
    int size;
    int capacity;
public:
    MinHeap(int c){
        arr = new int[c];
        size = 0;
        capacity = c;
    }
    int leftChild(int i){
        return 2*i + 1;
    }
    int rightChild(int i){
        return 2*i + 2;
    }
    int parent(int i){
        return (i-1)/2;
    }
    void insert(int x){
        if(size == capacity){
            return;
        }
        size++;
        arr[size - 1] = x;
        for(int i = size - 1; i != 0 && arr[parent(i)] > arr[i]; i--){
            swap(arr[i],arr[parent(i)]);
            i = parent(i);
        }
    }
};

int main() {


    return 0;
}
