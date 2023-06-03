#include <bits/stdc++.h>
using namespace std;

// Efficient
// Time: O(sqrt(n))
void primeFactors(int n){
    if(n <= 1){
        return;
    }
    
    for(int i = 2; i <= sqrt(n); i ++){
        while(n % i == 0){
            cout << i << " ";
            n = n / i;
        }
    }
    
    if(n > 1){
        cout << n;
    }
}

int main()
{
    int n = 12;
    primeFactors(n);

    return 0;
}