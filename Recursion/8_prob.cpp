#include <bits/stdc++.h>
#define ll long long
using namespace std;

/* Check if a string is palindrome */

bool func(string st, int i, int n){
    if(i >= n/2){
        return true;
    }

    return (st[i] == st[n-i-1]) && func(st, i+1, n);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);    

    string st = "MADAM";
    int n = st.length();

    cout << boolalpha << func(st, 0, n) << endl;

    return 0;
}
