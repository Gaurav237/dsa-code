#include <bits/stdc++.h>
#define ll long long
using namespace std;

/* Print all subsequence of array */

void subseq(int i, vector<int> &ds, int arr[], int n){
    // Base Condition
    if(i >= n){
        if(ds.empty()){
            cout << "{}" << endl;
            return;    
        }

        // print the list ds
        for(int j = 0; j < ds.size(); j++){
            cout << ds[j] << " ";
        }
        cout << endl;
        return;
    }

    // `take` or pick the particular index into the subsequence
    ds.push_back(arr[i]);
    subseq(i+1, ds, arr, n);

    // `not take` or not pick the particular index into the subsequence
    ds.pop_back();
    subseq(i+1, ds, arr, n);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;

    subseq(0, ds, arr, n);

    return 0;
}
