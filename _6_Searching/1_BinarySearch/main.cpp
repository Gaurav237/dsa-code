#include <bits/stdc++.h>
using namespace std;

int BS(const int A[], int n, int key){
    int low = 0;
    int high = n - 1;
//    int mid;
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

int main() {
//    int a[] = {2,4,7,14,16,19,26};
//    int n = 6;
//    int k = 19;
    int a[] = {10,20,30,40,50,60};
    int n = 6;
    int k = 40;

    cout << BS(a,n,k);

    return 0;
}
