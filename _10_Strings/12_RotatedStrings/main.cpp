#include <bits/stdc++.h>
#define ll long long
using namespace std;

// Time : O(n)
bool checkForRotations(string &st1, string &st2){
    if(st1.length() != st2.length()){
        return false;
    }
    
    return ((st1+st1).find(st2) != string::npos);
}

int main(){

    string s1 = "ABAB";
    string s2 = "ABBA";

    cout << boolalpha << checkForRotations(s1, s2);

    return 0;
}
