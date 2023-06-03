// check if a string is subsequence of other string.

#include <iostream>
using namespace std;

bool subsequence(const string& s1, const string& s2){
    int i = 0;
    int j = 0;
    while(i < s1.length() && j < s2.length()){
        if(s1[i] == s2[j]){
            i++;
            j++;
        }else{
            i++;
        }

    }
    if(j == s2.length()){
        return true;
    }else {
        return false;
    }
}


int main() {
    string s1 = "ABCD";
    string s2 = "AD";

    cout << boolalpha;
    cout << subsequence(s1,s2);

    return 0;
}
