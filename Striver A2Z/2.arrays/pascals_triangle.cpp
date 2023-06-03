#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<vector<int>> generate(int numRows) {
               
    vector<vector<int>> res(numRows);

    for(int i = 0; i < numRows; i++){
        res[i].resize(i+1);

        // set first and last columns as 1, always
        res[i][0] = res[i][i] = 1;

        // set inner elements
        // ( no. of columns in each row = row no. )
        for(int j = 1; j < i; j++){
            res[i][j] = res[i-1][j-1] + res[i-1][j];
        }
    }

    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    

    return 0;
}
