#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n == 1){
        return false;
    }
    if(n == 2 || n == 3){
        return true;
    }
    if(n % 2 == 0 || n % 3 == 0){
        return false;
    }

    for(int i = 5; i <= sqrt(n); i += 6){
        if(n % i == 0 || n % (i+2) == 0){
            return false;
        }
    }
    return true;
}

// Naive
// Time: O(n^2 * (log n))
void primeFactors(int n){

    for(int i = 2; i < n; i++){
        if(isPrime(i)){
            int x = i;

            // time: O(log n)
            while(n % x == 0){
                cout << i << " ";
                x = x * i;
            }
        }
    }
}

int main(){



    return 0;
}