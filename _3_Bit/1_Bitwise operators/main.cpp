#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x = 3;
    int y = 6;

    // and
    cout << (x & y) << endl;
    
    // or
    cout << (x | y) << endl;
    
    /* XOR (^) : 1 if both bits are different,
                 0 if same
        # Properties:
        1) x ^ 0 = x
        2) x ^ x = 0
        3) x ^ y = y ^ x
        4) x ^ (y ^ z) = (x ^ y) ^ z 
    */
    cout << (x ^ y) << endl;

    // left shift : (x << y) = x * 2^y
    cout << (x << 2) <<  endl;
    
    // right shift : (x >> y) = floor( x / 2^y )
    cout << (x >> 1) << endl; 

    // not
    unsigned p = 5;   // (2^(32)) - 1 = 4294967295
    cout << (~p) << endl;

    signed q = 5;
    /*
    Signed:  input range ( -2^(31) to 2^(31) - 1 )
        MSB represents positive or negative, i.e. 0 => + and 1 => -

    Negative Numbers : 
        negative no. are stored as 
        2s complement of x in n bits representation = 2 ^ (n) - x
            eg: let n = 3 bit representation,
                - 2  = 2^3 - 2 : 6 : 110 (binary)
    */
    cout << (~q) << endl;

    return 0;
}
