#include <bits/stdc++.h>
using namespace std;

// O(n^2)
// void SmallestPrimeFactors(int n){
//     cout << 1 << " ";
//     if(n == 1){
//         return;
//     }
    
//     for(int x = 2; x <= n; x++){
//         for(int i = 2; i <= x; i++){
//             if(x % i == 0){
//                 cout << i << " ";
//                 break;
//             }
//         } 
//     }
// }

vector<bool> SieveOfEratosthenes(int n){
    vector<bool> prime(n + 1, true);
    
    for(int i = 2; i <= sqrt(n); i++){
        if(prime[i] == true){
            for(int j = i * i; j <= n; j = j + i){
                prime[j] = false;
            }
        }
    }
    
    return prime;
}

void smallestPrimeFactors(int n){
    vector<bool> isPrime = SieveOfEratosthenes(n);
    
    cout << 1 << " ";
    
    for(int x = 2; x <= n; x++){
        if(isPrime[x] == true){
            cout << x << " ";
        }else{
            if(x % 2 == 0){
                cout << 2 << " ";
            }else{
                cout << 3 << " ";
            }
        }
    }
    
}

int main()
{
    int n = 1;
    smallestPrimeFactors(n);

    return 0;
}