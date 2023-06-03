#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    // printing from (1 ... row no.), for each row
    int n = 5;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
*/