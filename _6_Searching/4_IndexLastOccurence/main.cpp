#include <bits/stdc++.h>
using namespace std;

// O(log n)  => Time Complexity.
// int last_occ(const int A[], int n, int key){
//     int low = 0;
//     int high = n - 1;
//     while(low <= high){
//         int mid = (low+high)/2;
//         if(A[mid] < key){
//             low = mid + 1;
//         }else if(key < A[mid]){
//             high = mid - 1;
//         }else{  // ( A[mid] == key )
//             if(mid == (n - 1) || A[mid] != A[mid + 1]){
//                 return mid;
//             }else{
//                 low = mid + 1;
//             }
//         }
//     }
//     return -1;
// }

// another way
// O( log n )
int last_occ(const int A[], int n, int key){
    int low = 0;
    int high = n - 1;
    int result = -1;

    while(low <= high){
        int mid = (low+high)/2;
        if(A[mid] < key){
            low = mid + 1;
        }else if(key < A[mid]){
            high = mid - 1;
        }else{  // ( A[mid] == key )
            result = mid;
            low = mid + 1;        
        }
    }

    return result;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a[] = {10,15,20,20,40,40};
    int n = 6;
    int k = 40;
    // int a[] = {5,8,8,10,10};
    // int n = 5;
    // int k = 10;
    // int a[] = {8,10,10,12};
    // int n = 4;
    // int k = 7;

    cout << last_occ(a,n,k);

    return 0;
}