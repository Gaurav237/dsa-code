#include <bits/stdc++.h>
using namespace std;

// Naive
int GCD_1(int a, int b){
    // assuming: a > 0   b> 0
    int res = min(a,b);
    while(res > 1){
        if(a % res == 0 && b % res == 0){
            break;
        }
        res--;
    }

    return res;
}


// better
// using Eucledian Algorithm
int GCD(int a, int b){
    if(b == 0){
        return a;
    }

    return GCD(b, a % b);
}


int main() {
    cout << GCD(7,2) << endl;

    return 0;
}
