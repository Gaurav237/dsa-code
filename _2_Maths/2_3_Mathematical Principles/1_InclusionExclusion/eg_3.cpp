/*
Not Conditions
*/

#include <bits/stdc++.h>
using namespace std;


int solve(int n){

    int a = n / 3;
    int b = n / 4;
    int c = n / (3 * 4);

    // cout << a << " " << b << " " << c << "\n";
    return n - a - b + c;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 1000;
    cout << solve(n);


    return 0;
}
