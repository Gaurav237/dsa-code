#include <bits/stdc++.h>
using namespace std;

// Normal recursive solution
int dCount(int n){
    if(n == 1 || n == 2){
        return n - 1;  // 0 or 1
    }

    return ((n-1) * (dCount(n-2) + dCount(n-1)));
}

// DP optimised solution
int DCount(int n){
    if(n == 1 || n == 2){
        return n-1;
    }

    int a = 0;
    int b = 1;
    int c;
    for(int i = 3; i <= n; i++){
        c = (i-1) * (a + b);
        a = b;
        b = c;
    }
    
    return c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << DCount(5);

    return 0;
}
