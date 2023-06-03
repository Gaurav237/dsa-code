#include <bits/stdc++.h>
#define ll long long
using namespace std;

/* Print all subsequence of array whose sum is equal to  K*/

void subseq(int i, vector<int> &ds, int currSum, int sum, int arr[], int n){
    // Base Condition
    if(i == n){
        if(sum == currSum){
            // print the list ds
            for(int e : ds){
                cout << e << " ";
            }
            cout << endl;
        }
        return;
    }

    // `take` or pick the particular index into the subsequence
    ds.push_back(arr[i]);
    currSum += arr[i];
    subseq(i+1, ds, currSum, sum, arr, n);

    // `not take` or not pick the particular index into the subsequence
    ds.pop_back();
    currSum -= arr[i];
    subseq(i+1, ds, currSum, sum, arr, n);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector<int> ds;

    subseq(0, ds, 0, sum, arr, n);

    return 0;
}
