// Euler Totient Function

#include <bits/stdc++.h>
using namespace std;

vector<int> PrimeFactors(int n){
    vector<int> v;

    if(n <= 1){
        exit(-1);
    }
    
    for(int i = 2; i <= sqrt(n); i ++){
        while(n % i == 0){
            v.push_back(i);
            n = n / i;
        }
    }
    
    if(n > 1){
        v.push_back(n);
    }
    return v;
}

// Efficient
// Time: O(sqrt(n))
int phi(int n){
    vector<int> p = PrimeFactors(n);

    int res = n;
    for(int i = 0; i < p.size(); i++){
        res = res - (res / p[i]);
    }

    return res;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 100;
    cout << phi(n);


    return 0;
}
