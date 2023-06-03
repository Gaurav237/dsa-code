// Using Eucledian Algorithm

#include <bits/stdc++.h>
using namespace std;

// Basic version of euclidean algorithm
int GCD_basic(int a, int b){
    while(a != b){
        if(a > b){
            a = a- b;
        }else{   // b > a
            b = b - a;
        }
    }
    return a;
}

// Time Complexity : O( log n )   where, n = min(a,b)
// Optimised Implementation
// Recursive
int GCD(int a, int b){
    if(b == 0){
        return a;
    }

    return GCD(b, a % b);
}

//Iterative
int GCD_iter(int a, int b){
    while(b != 0){
        int temp = a;
        a = b;
        b = temp % b;
    }
    return a;
}

int main() {
    cout << GCD_iter(110, 30) << endl;

    return 0;
}
