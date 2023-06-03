#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    // printing from (1 ... row no.), for each row
    int n = 5;
    // 2n - 1 = 9 rows

    for(int i = 1; i <= n; i++){

        int start;
        if(i % 2 != 0){
            start = 1;
        }else{
            start = 0;
        }

        for(int j = 1; j <= i; j++){
            cout << start << " ";
            start = 1 - start;
        }

        cout << endl;
    }

    return 0;
}
/*
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 
*/