/* Find the repeating and missing numbers */

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(vector<int> &v){
    int len = v.size();

    int S = (len * (len+1)) / 2;
    int P = (len * (len+1) * (2*len+1)) / 6;
    
    int missingNumber = 0;
    int repeatingNumber = 0;

    for(int i = 0; i < len; i++){
        S -= v[i];
        P -= v[i] * v[i];
    }

    missingNumber = (S + P/S) / 2;
    repeatingNumber = (P/S - S) / 2;

    cout << missingNumber << " " << repeatingNumber << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v = {3,1,2,5,4,6,7,5};

    solve(v);

    return 0;
}
