#include <bits/stdc++.h>
using namespace std;

// using Hashing
// Time: O(n)
// Space: O(n)
int onlyOddOcc_1(int arr[], int n){
    unordered_map<int, int> hm;

    for(int i = 0; i < n; i++){
        hm[arr[i]]++;
    }

    for(auto e : hm){
        if(e.second % 2 != 0){
            return e.first;
        }
    }

    return -1;
}

// Efficient
/* using XOR : 
    # Properties:
        1) x ^ 0 = x
        2) x ^ x = 0
    # logic: do XOR of all the elements, as even(pair of 2) occuring elements will become 0.
*/
// Time: O(n)
// Space: O(1)
int onlyOddOcc_2(int arr[], int n){
    int res = 0;
    for(int i = 0; i < n; i++){
        res = res ^ arr[i];
    }

    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[] = {4,3,3,3,4,4,4,5,5};
    // int arr[] = {8,7,7,8,8};
    // int arr[] = {9};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << onlyOddOcc_1(arr, n) << "\n";

    return 0;
}
