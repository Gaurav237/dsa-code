#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int CHAR = 256;

int fact(int n){
    return ((n <= 1) ? 1 : n * fact(n-1));
}

int lexRank(const string &str){
    int len = str.length();
    int res = 0;
    int mul = fact(len);
    
    vector<int> count(CHAR, 0);
    
    // frequency count  
    for(int i = 0; i < len; i++){
        count[str[i]]++;
    } 

    // cumulative frequency count
    for(int i = 1; i < CHAR; i++){
        count[i] += count[i-1];
    }

    for(int i = 0; i < len; i++){
        mul = mul / (len-i);
        res = res + count[str[i] - 1] * mul;

        // Count number of chars smaller than str[i]
        // from str[i+1] to str[len-1]
        for(int j = str[i]; j < CHAR; j++){
            count[j]--;
        }
    }

    return res + 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << lexRank("STRING") << "\n";

    return 0;
}
