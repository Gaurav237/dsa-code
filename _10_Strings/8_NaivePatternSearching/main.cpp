#include <bits/stdc++.h>
using namespace std;

// Naive
// Time : O((n-m+1)*m)
void patSearch(const string &text, const string &pat){
    int n = text.length();
    int m = pat.length();

    // for(int i = 0; i <= n-m; i++){
    //     if(text.substr(i, m) == pat){
    //         cout << i << " ";
    //     }
    // } 

    for(int i = 0; i <= n-m; i++){
        int j;
        for(j = 0; j < m; j++){
            if(pat[j] != text[i+j]){
                break;
            }
        }
        if(j == m){
            cout << i << " ";
        }
    }
}

int main(){
    string text = "ABABABCD";
    string pat = "ABAB";

    patSearch(text, pat);


    return 0;
}