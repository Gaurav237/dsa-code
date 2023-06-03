/*
    SieveOfEratosthenes
    To find all primes smaller than n 
*/
#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n){
    vector<bool> prime(n + 1, true);
    
    for(int i = 2; i <= sqrt(n); i++){
        if(prime[i] == true){
            for(int j = i * i; j <= n; j = j + i){
                prime[j] = false;
            }
        }
    }
    
    for(int i = 2; i <= n; i++){
        if(prime[i]){
            cout << i << " ";
        }
    }
}


int main()
{
    int n = 50;
    SieveOfEratosthenes(n);

    return 0;
}