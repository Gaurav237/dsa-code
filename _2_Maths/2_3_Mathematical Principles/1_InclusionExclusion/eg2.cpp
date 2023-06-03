#include <bits/stdc++.h>
using namespace std;

int solve(int n){

    return 2 * pow(2,n-1) - pow(2,n-2);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 4;
    cout << solve(n) << endl;

    return 0;
}
