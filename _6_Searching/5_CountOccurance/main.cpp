#include <bits/stdc++.h>
using namespace std;

// O(log n) => Time Complexity
int first_occurrence(const int A[], int n, int key){
    int low = 0;
    int high = n - 1;
    while(low <= high){
        // normal binary search logic...
        int mid = (low+high)/2;
        if(A[mid] > key){
            high = mid - 1;
        }else if(A[mid] < key){
            low = mid + 1;
        }else{ // condition : (A[mid] == key)        // ...till here
            if(mid == 0 || A[mid-1] != A[mid]){
                return mid;
            }else{ // ( A[mid-1] == A[mid] )
                high = mid - 1;
                // because first occurrence will be on the left side.
            }
        }
    }
    return -1;
}

// O(log n) => Time Complexity
int last_occurrence(const int A[], int n, int key){
    int low = 0;
    int high = n - 1;
    while(low <= high){
        // normal binary search logic...
        int mid = (low+high)/2;
        if(A[mid] > key){
            high = mid - 1;
        }else if(A[mid] < key){
            low = mid + 1;
        }else{ // condition : (A[mid] == key)        // ...till here
            if(mid == 0 || A[mid] != A[mid+1]){
                return mid;
            }else{ // ( A[mid] == A[mid+1] )
                low = mid + 1;
                // because first occurrence will be on the left side.
            }
        }
    }
    return -1;
}

// Time Complexity => O(log n)
int count_occurrence(int A[], int n, int key){
    int first = first_occurrence(A,n,key);
    if(first == -1){
        return 0;
    }
    return last_occurrence(A,n,key) - first + 1;
}

int main() {
//    int A[] = {10,10,20,20,20,40,40};
//    int n = 7;
//    int key = 20;
    int A[] = {10,10,10,10,10};
    int n = 5;
    int key = 10;

    cout << count_occurrence(A,n,key);
    return 0;
}
