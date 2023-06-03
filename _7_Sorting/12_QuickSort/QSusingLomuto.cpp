// Lomuto Partition comes in it's correct position. 

#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int h){
    int i = l - 1;
    int pivot = arr[h];   // pivot element

    for(int j = 0; j < h - 1; j++){
        if(arr[j] < pivot){
            i = i + 1;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);

return i + 1;
}

void quickSort(int arr[], int l, int h){
    if(l < h){
        int p = partition(arr, l, h);
        quickSort(arr, l, p - 1);
        quickSort(arr, p + 1, h);
    }
}

int main() {
    // int arr[] = {3,8,6,12,10,7};
    int arr[] = {8,4,7,9,3,10,5};
    int n = 7;
    // partition(arr, 0, 5);
    quickSort(arr, 0, n - 1);
    for(int e : arr){
        cout << e << " ";
    }

    return 0;
}
