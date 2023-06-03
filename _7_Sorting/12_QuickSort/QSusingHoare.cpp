#include <bits/stdc++.h>
using namespace std;

// Hoare Partition
int partition(int arr[], int l, int h){
    int i = l - 1;
    int j = h + 1;
    int x = arr[l];  // pivot elemenent

    while(true){
        do{
            i++;
        }while(arr[i] < x);
        
        do{
            j--;
        }while(arr[j] > x);

        if(i >= j){ return j; }

        swap(arr[i], arr[j]);
    }

    return j;
}

void quickSort(int arr[], int l, int h){
    if(l < h){
        int p = partition(arr, l, h);
        quickSort(arr, l, p);
        quickSort(arr, p + 1, h);
    }
}

int main(){
    int arr[] = {8,4,7,9,3,10,5};
    int n = 7;

    // cout << partition(arr, 0, n - 1) << endl;
    quickSort(arr, 0, n-1);
    
    for(int e : arr){
        cout << e << " ";
    }

    return 0;
}