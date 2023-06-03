#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 5;

    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= i; j++){
            cout << (char)(i + 64);
        }
        cout << endl;
    }

    return 0;
}

/*
A
BB
CCC
DDDD
EEEEE
*/