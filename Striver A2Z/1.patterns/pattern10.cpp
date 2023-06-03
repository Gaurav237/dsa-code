#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    // printing from (1 ... row no.), for each row
    int n = 5;
    // 2n - 1 = 9 rows

    for(int i = 1; i <= 2*n-1; i++){

        int stars;
        if(i <= n){
            stars = i;
        }else{
            stars = 2*n - i;
        }   
        
        for(int j = 1; j <= stars; j++){
                cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
