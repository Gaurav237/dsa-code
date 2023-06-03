#include <bits/stdc++.h>
using namespace std;

// Soln 1 : Naive
// O(position)
// int search(int arr[], int x){
//     int i = 0;
//     while(true){
//         if(i == x){
//             return i;
//         }else if(i > x){
//             return -1;
//         }
//         i++;
//     }
// }

// normal Binary search code
int binarySearch(const int A[], int key, int low, int high){
    // low and high are passed as paramter
    while(low <= high){
        int mid = floor((low + high)/ 2);
        if(A[mid] == key){
            return mid;
        }else if(A[mid] > key){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return -1;
}

// soln 2 : Optimal
// O( log( position ) )
int search(int arr[], int x){
    if(arr[0] == x){ return 0; }

    int i = 1;
    while(arr[i] < x){
        i = i * 2;
    }

    if(arr[i] == x) { return i; }

    return binarySearch(arr, x, i/2 + 1, i-1);
}

int main() {
    
    return 0;
}