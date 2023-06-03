#include <bits/stdc++.h>
using namespace std;

// Hoare Partition
int Partition(int arr[], int n){
    int low = 0;
    int high = n - 1;
    
    int i = low - 1;
    int j = high + 1;
    int x = arr[low];  // pivot elemenent

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
}

int main(){
    int arr[] = {8,4,7,9,3,10,5};
    int n = 7;

    Partition(arr, n);

    return 0;
}