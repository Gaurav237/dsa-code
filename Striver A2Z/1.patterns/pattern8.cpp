#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    // printing from (1 ... row no.), for each row
    int n = 6;

    for(int i = 1; i <= n; i++){

        for(int j = 1; j < i; j++){
            cout << "  ";
        }

        for(int j = 1; j <= (2*(n-i) + 1); j++){
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}

/*
* * * * * * * * * * * 
  * * * * * * * * * 
    * * * * * * * 
      * * * * * 
        * * * 
          * 
*/