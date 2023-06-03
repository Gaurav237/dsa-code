#include <bits/stdc++.h>
using namespace std;

// naive solution
// O(n) => Time complexity
int first_occurrence_1(const int A[], int n, int key){
    for(int i = 0; i < n; i++){
        if(A[i] == key){
            return i;
        }
    }
    return -1;
}

// O(log n) => Time Complexity
// int first_occurrence(const int A[], int n, int key){
//     int low = 0;
//     int high = n - 1;
//     while(low <= high){
//         // normal binary search logic...
//         int mid = (low+high)/2;
//         if(A[mid] > key){
//             high = mid - 1;
//         }else if(A[mid] < key){
//             low = mid + 1;
//         }else{ // condition : (A[mid] == key)        // ...till here
//             if(mid == 0 || A[mid-1] != A[mid]){
//                 return mid;
//             }else{ // ( A[mid-1] == A[mid] )
//                 high = mid - 1;
//                  // because first occurrence will be on the left side.
//             }
//         }
//     }
//     return -1;
// }

// another way
// O(log n)
int first_occurrence(const int A[], int n, int key){
    int low = 0;
    int high = n - 1;
    int result = -1;
    while(low <= high){
        // normal binary search logic...
        int mid = (low+high)/2;
        if(A[mid] > key){
            high = mid - 1;
        }else if(A[mid] < key){
            low = mid + 1;
        }else{ // condition : (A[mid] == key)        // ...till here
            result = mid;
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int a[] = {1,10,10,10,20,20,40};
    int n = 7;
    int k = 10;
//    int a[] = {10,20,30};
//    int n = 3;
//    int k = 15;
//    int a[] = {15,15,15};
//    int n = 3;
//    int k = 15;

    cout << first_occurrence(a,n,k);

    return 0;
}
