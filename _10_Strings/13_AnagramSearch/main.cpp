#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int CHAR = 256;
// EFficient solution
// Time : O(n)

bool solve(string &txt, string &pat){
    // m < n 
    int m = pat.length();
    int n = txt.length();
    
    // frequency count arrays
    vector<int> Ctxt(CHAR, 0);
    vector<int> Cpat(CHAR, 0);

    // initializing first window substring 
    for(int i = 0; i < m; i++){
        Ctxt[txt[i]]++;
        Cpat[pat[i]]++;
    }

    // adding new char count, 
    // and removing last char count form last window
    for(int i = m; i < n; i++){
        
        if(Ctxt == Cpat){
            return true;
        }
        Ctxt[txt[i]]++;
        Ctxt[txt[i-m]]--;
    }

    return false;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string txt = "GEEKSFORGEEKS";
    string pat = "FROG";

    cout << boolalpha << solve(txt, pat);

    return 0;
}
