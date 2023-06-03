#include <bits/stdc++.h>
using namespace std;

int solve(int n, int a, int b){
    int ca = n / a;
    int cb = n / b;
    int cab = n / (a*b);
    // cout << ca << " " << cb << " " << cab << " ";
    return ca + cb - cab;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 1000;
    int a = 3;
    int b = 4;

    cout << solve(n,a,b);    


    return 0;
}
