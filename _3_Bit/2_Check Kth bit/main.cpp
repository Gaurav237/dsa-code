#include <bits/stdc++.h>
using namespace std;

// using right-shift operator
bool isKthBitSet_1(int n, int k){
    int x = (n >> (k-1));
    
    if((x & 1) == 1){
        return true;
    }else{
        return false;
    }
}

// using left-shift operator
bool isKthBitSet_2(int n, int k){
    int x = 1 << (k-1);
    
    if( n & x != 0 ){ // only the Kth element will have 1 value in later no. i.e(1 << (k-1))
        return true;
    }else{
        return false;
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // int n = 5, k = 1;
    // int n = 8, k = 2;
    // int n = 0, k = 3;
    int n = 39, k = 5;

    cout << boolalpha << isKthBitSet_1(n,k) << "\n";
    
    return 0;
}
