/*
Given an Sorted array and a number x, we need to find if there 
is a triplet in the array whose sum is equal to x.
*/

#include <bits/stdc++.h>
using namespace std;

// Two Pointer Approach
// Time: O(n ^ 2)
bool isTripletSum(int arr[], int n, int sum){

    for(int i = 0; i < n; i++){
        int x = 0;
        int j = i + 1;
        int k = n - 1;
        while(j < k){
            x = arr[i] + arr[j];
            if(x + arr[k] == sum){
                return true;
            }else if(x + arr[k] < sum){
                j++;
            }else if(x + arr[k] > sum){
                k--;
            }
        }
    }

    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[] = {2,3,4,8,9,20,40};
    int sum = 100;
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << boolalpha << isTripletSum(arr, n, sum);
 
    return 0;
}
