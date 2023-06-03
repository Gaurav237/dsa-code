/*
Given an unsorted array and a number x, we need to find if there 
is a pair in the array with sum equals to x.

eg: int arr[] = {3,5,9,2,8,10,11}
    int x = 12
    o/p: Yes

Solution:
    1) using HashMap => Time: O(n) | if array is unsorted
    2) using Two Pointer Approach => Time: O(n)        | if array is sorted
                                     Time: O(n * logn) | if array is unsorted
    
    Note: Two Pointer Method is better than Hashmap Method, when the given array is already sorted. 
            because Hashmap requires extra computation time and also requires O(n) extra space.
*/

#include <bits/stdc++.h>
using namespace std;

// Two Pointer Approach
// Time: O(n * log n)
bool isPairSum(int arr[], int n, int sum){
    sort(arr, arr + n);

    int i = 0;
    int j = n - 1;
    while(i < j){
        if(arr[i] + arr[j] == sum){
            cout << "( " << arr[i] << " , " << arr[j] << " )" << "\n";
            return true;
        }else if(arr[i] + arr[j] < sum){
            i++;
        }else if(arr[i] + arr[j] > sum){
            j--;
        }
    }    

    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // int arr[] = {3,5,9,2,8,10,11};
    // int x = 21;
    int arr[] = {2,4,8,9,11,12,20,30};
    int x = 23;
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << boolalpha << isPairSum(arr, n, x);
 
    return 0;
}
