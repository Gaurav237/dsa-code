// Euler Totient Function

#include <bits/stdc++.h>
using namespace std;

int _gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b, a % b);
}

// naive
// Time: O(n * log n)
int phi(int n){
    int count = 1;  // bcoz:  gcd(n, 1) = 1
    for(int i = 2; i < n; i++){
        if(_gcd(n, i) == 1){
            count++;
        }
    }
    return count;
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 10;
    cout << phi(n);


    return 0;
}
