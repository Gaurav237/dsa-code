/*
* the array is sorted and then rotated any no. of times
* we dont know by how much distance, array is rotated
*/

#include <bits/stdc++.h>
using namespace std;

int search(const int A[], int n, int key){
    int low = 0, high = n - 1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(A[mid] == key){
            return mid;
        }
        if(A[low] < A[mid]){ // If Left Half is Sorted
            if(key >= A[low] && key < A[mid]){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }else{  // If Right Half is Sorted
            if(key > A[mid] && key <= A[high]){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main() {
    int A[] = {10,20,30,40,50,8,9};
    int n = 7;
    int k = 8;

    cout << search(A,n,k);
    return 0;
}