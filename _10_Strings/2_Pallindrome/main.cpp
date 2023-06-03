#include <bits/stdc++.h>
using namespace std;

bool palindrome_check(string st){
    int n = st.length();
    int flag = true;
    for(int i = 0; i < n/2; i++){
        if(st[i] != st[n-i-1]){
            flag = false;
            break;
        }
    }
    return flag;
}

bool palindrome_check_2(string st){
    string rev = st;
    reverse(rev.begin(), rev.end());
    return (rev == st);
}


int main() {
//    string str = "ABCDCBA";
//    string str = "ABBA";
    string str = "geeks";

    cout << boolalpha;
    cout << palindrome_check(str);


    return 0;
}
