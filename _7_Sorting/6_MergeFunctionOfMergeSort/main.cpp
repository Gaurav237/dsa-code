#include <iostream>
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

int main() {
    int arr[] = {10,15,20,11,30};
    int l = 0,m = 2,h = 4;

    merge(arr,l,m,h);

    for(int e : arr){
        cout << e << " ";
    }

    return 0;
}
