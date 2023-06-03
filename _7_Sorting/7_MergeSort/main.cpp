#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int low, int mid, int high){
    int size = high - low + 1;
    int c[size];

    int i = 0, x = low, y = mid + 1;
    while(x <= mid && y <= high){
        if(a[x] < a[y]){
            c[i++] = a[x++];
        }else{
            c[i++] = a[y++];
        }
    }
    while(x <= mid){
        c[i++] = a[x++];
    }
    while(y <= high){
        c[i++] = a[y++];
    }

    for(int j = 0; j < size; j++){
        a[j] = c[j];
    }
}

void mergeSort(int a[], int l, int r){
    if(r > l){  // at least 2 elements
        int m = l + (r-l)/2;   // m = (l + r) / 2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);
    }
}


int main() {
    int a[] = {10,5,30,15,7};
    int n = 5;

    mergeSort(a,0,n-1);

    for(int e : a){
        cout << e << " ";
    }

    return 0;
}
