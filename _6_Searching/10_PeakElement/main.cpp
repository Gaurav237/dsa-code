/*
Peak Element : number is greater than its immediate neighbour.
*/
#include <bits/stdc++.h>
using namespace std;

// Naive
// Time: O(n)
int getPeakElement_1(int arr[], int n){
    if(n == 1){ return 0; }

    if(arr[0] >= arr[1]) { return arr[0]; }
    if(arr[n-1] >= arr[n-2]) { return  arr[n-1]; }
    
    for(int i = 1; i < n-1; i++){
        if(arr[i] >= arr[i-1] && arr[i] >= arr[i+1]){
            return arr[i];
        }
    }

    return -1;
}

// Better
// Time: O(log n)
int getPeakElement(int arr[], int n){
    int low = 0;
    int high = n - 1;
    while(low <= high){
        int mid = (low + high) / 2;

        // For Peak Element check
        // if there is nothing on left of mid, then mid == 0, so dont check on left
        // if there is nothing on right of mid, then mid == n-1, so dont check on right
        if((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n-1 || arr[mid] >= arr[mid + 1])){
            return mid;
        }else if(mid > 0 && arr[mid-1] >= arr[mid]){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return -1;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // int arr[] = {5,10,20,15,7};  // 20
    int arr[] = {10,20,15,5,23,90}; // 20 or 90
    // int arr[] = {80,70,90};  // 80 or 90
    // int arr[] = {10};  // 10

    int n = sizeof(arr)/sizeof(arr[0]);

    // cout << 0 || 2;
    // cout << 2 || 0;
    cout << getPeakElement(arr,n) << endl;

    return 0;
}
