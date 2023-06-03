#include <bits/stdc++.h>
#define ll long long
using namespace std;

int comb_1(int n, int r){

    int dp[n+1][r+1];

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= r; j++){
            if(j > i){
                dp[i][j] = 0;
            }else if(j == 0 || j == i){
                dp[i][j] = 1;
            }else{
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
            }
        }
    }

    return dp[n][r];
}

// Time => Theta(n*r)
// Aux Space => Theta(n*r)
int comb_2(int n, int r){

    int dp[n+1][r+1];
    
    for(int i = 0; i <= n; i++){
        dp[i][0] = 1;
        for(int j = 1; j <= min(i,r); j++){
            if(j == i){
                dp[i][j] = 1;
            }else{
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
            }
        }
    }

    return dp[n][r];
}

// Time => Theta(n*r)
// Aux Space => Theta(r)
int comb_3(int n, int r){
    int dp[r+1] = {0};
    dp[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = min(i,r); j > 0; j--){
            dp[j] = dp[j] + dp[j-1];
        }
    }
    return dp[r];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 5;
    int r = 3;

    cout << comb_3(n,r) << '\n';

    return 0;
}
