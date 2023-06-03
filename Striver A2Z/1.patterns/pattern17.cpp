#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 4;

    // for(int i = 1; i <= n; i++){
    //     // space
    //     for(int j = 1; j <= n-i; j++){
    //         cout << " ";
    //     }

    //     // letter
    //     for(int j = 1; j <= i; j++){
    //         cout << (char)(j + 64);
    //     }

    //     // letter
    //     for(int j = i-1; j >= 1; j--){
    //         cout << (char)(j + 64);
    //     }

    //     cout << endl;
    // }


    for(int i = 1; i <= n; i++){
        // space
        for(int j = 1; j <= n-i; j++){
            cout << " ";
        }

        // letter
        int x = 1;

        for(int j = 1; j <= (2*i-1); j++){
            if(x <= n/2){
                x++;
            }else{
                x--;
            }
            cout << (char)(x + 63);
        }
        cout << endl;
    }

    return 0;
}

/*
   A
  ABA
 ABCBA
ABCDCBA
*/

/*
A
BB
CCC
DDDD
EEEEE
*/