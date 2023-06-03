#include <bits/stdc++.h>
#define ll long long
using namespace std;

// Time: O(n * log n)
int solve(vector<int> v, int m){
    sort(v.begin(), v.end());

    int res = v[m-1] - v[0];
    for(int i = m; i < v.size(); i++){
        int x = v[i] - v[i-m+1];
        res = min(res, x);
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // vector<int> v = {7,3,2,4,9,12,56};
    // int m = 3;
    vector<int> v = {3,4,1,9,56,7,9,12};
    int m = 5;

    cout << solve(v, m);    

    return 0;
}
