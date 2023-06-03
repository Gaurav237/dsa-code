#include <bits/stdc++.h>
#define ll long long
using namespace std;

// start region
// Naive : O(n * log n)
int KthSmallest_1(vector<int> arr, int k){
    sort(arr.begin(), arr.end());
    return arr[k-1];
}
// end region

// start region
// Efficient: Using Quick Select method

int partition(vector<int> arr, int l, int r){
    int pivot = arr[r];
    int i = l - 1;

    for(int j = l; j <= r; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[r]);
    return i + 1;
}

int KthSmallest(vector<int> arr, int k){
    int l = 0;
    int r = arr.size() - 1;

    while (l <= r){
        int p = partition(arr, l, r);
        if(p == k - 1){
            return p;
        }else if(p > k - 1){
            r = p - 1;
        }else{
            l = p + 1;
        }
    }
    return -1;
}

// end region

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v = {10,4,5,8,11,6,26};
    int k = 5;

    // cout << partition(v, 0, 4);
    cout << KthSmallest(v, k) << "\n";    

    return 0;
}
