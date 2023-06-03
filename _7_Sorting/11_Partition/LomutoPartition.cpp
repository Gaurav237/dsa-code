// Lomuto Partition comes in it's correct position. 

#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int n){
    int i = -1;
    int x = n - 1;   // pivot element

    for(int j = 0; j < n - 1; j++){
        if(arr[j] < arr[x]){
            i = i + 1;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1],arr[x]);

return i;
}



int main() {
    int arr[] = {3,8,6,12,10,7};
    int n = 6;

    partition(arr,n);
    for(int e : arr){
        cout << e << " ";
    }

    return 0;
}
