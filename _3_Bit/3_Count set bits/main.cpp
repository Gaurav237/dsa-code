#include <bits/stdc++.h>
using namespace std;


// Naive
// Time : O ( total bits in number )
int countSetBits_1(int n){
    int count = 0;

    while(n != 0){
        if(n & 1 == 1){ // or: if(n % 2 != 0)
            count++;
        }
        n = n >> 1;  // or: n = n / 2;
    }

    return count;
}

/* Brian Kerningam Algorithm
    logic: when we subtract 1 from a no., then all the bits from the last set bit 
            becomes 1 and last set bit becomes 0. Hence, each set bit turns off after n & (n-1)
*/
// Time : Theta (set bit count)
int countSetBits_2(int n){
    int res = 0;
    while(n != 0){
        n = n & (n-1);
        res++;
    }

    return res;
}

/*
int table[256];
// this array contains the no. of set bits of a no.
void initialize(){
    table[0] = 0;
    for(int i = 1; i < 256; i++){
        table[i] = (i&1) + table[i/2];
    }
}

int countSetBits_3(int n){
    int res = table[n & 0xff];
    n = n >> 8;
    res += table[n & 0xff];
    n = n >> 8;
    res += table[n & 0xff];
    n = n >> 8;
    res += table[n & 0xff];

    return res;
}
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // int n = 5;
    // int n = 7;
    int n = 13;
    // int n = 40;

    // cout << countSetBits_1(n) << "\n";
    cout << countSetBits_2(n) << "\n";
    // cout << countSetBits_3(n) << "\n";

    return 0;
}