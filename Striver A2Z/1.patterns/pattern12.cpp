#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 5;

    for(int i = 1; i <= n; i++){
        // numbers
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }

        // space
        for(int j = 1; j <= 2*(n-i); j++){
            cout << "  ";
        }

        // numbers
        for(int j = i; j >= 1; j--){
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
