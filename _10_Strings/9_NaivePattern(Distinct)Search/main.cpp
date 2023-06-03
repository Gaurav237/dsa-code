#include <bits/stdc++.h>
using namespace std;

// Naive (when pattern has Disctinct Characters)
// Time : O(n)
void patSearchDistinct(const string &text, const string &pat){
    int n = text.length();
    int m = pat.length();

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

        if(j == 0){
            i++;
        }else{
            i = j + i;
        }
    }
}

int main(){
    string text = "GEEKSFORGEEKS";
    string pat = "EKS";

    patSearchDistinct(text, pat);


    return 0;
}