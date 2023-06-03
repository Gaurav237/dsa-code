#include <bits/stdc++.h>
#define ll long long
using namespace std;

int solve(vector<int> v){
    sort(v.begin(), v.end());

    int res = INT_MAX;
    for(int i = 1; i < v.size(); i++){
        res = min(res, v[i] - v[i-1]);
    }

    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // 1,8,12,5,18
    vector<int> arr = {8,-1,0,3};
    
    cout << solve(arr) << "\n";

    return 0;
}
