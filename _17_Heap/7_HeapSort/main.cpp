#include <bits/stdc++.h>
using namespace std;

int leftChild(int i){
    return 2*i + 1;
}
int rightChild(int i){
    return 2*i + 2;
}
int parent(int i){
    return (i-1)/2;
}

void maxHeapify(int arr[], int n, int i){
    int lt = leftChild(i);
    int rt = rightChild(i);
    int largest = i;
    if(lt < n && arr[lt] > arr[largest]){
        largest = lt;
    }
    if(rt < n && arr[rt] > arr[largest]){
        largest = rt;
    }
    if(largest != i){
        swap(arr[i],arr[largest]);
        maxHeapify(arr,n,largest);
    }
}

void buildHeap(int arr[], int n){
    for(int i = parent(n-1); i >= 0; i--){
        maxHeapify(arr,n,i);
    }
}

void heapSort(int arr[], int n){
    buildHeap(arr,n);
    for(int i = n-1; i >= 1; i--){
        swap(arr[0],arr[i]);
        maxHeapify(arr,i,0);
    }
}

int main() {

    return 0;
}
