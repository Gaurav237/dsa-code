#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int CHAR = 256;

int solve(const string &str){
    int n = str.length();
    int res = 0;
    
    // last index of all characters is initialized as -1
    vector<int> prevIndex(CHAR,-1);

    for(int j = 0; j < n; j++){
        // If (prevIndex[str[j]] + 1) is more than previous start, then we updated the start index i. Else we keep same i.  
        int i = max(i, prevIndex[str[j]] + 1);

        int maxEnd = j - i + 1;

        res = max(res, maxEnd);
        prevIndex[str[j]] = j;
    }

    return res;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str = "abcadbd";
    cout << solve(str) << "\n";  

    return 0;
}
