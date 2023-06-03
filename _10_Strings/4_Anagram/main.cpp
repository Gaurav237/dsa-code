// Anagram : Two strings are permutation of each other or not.

#include <bits/stdc++.h>
using namespace std;

// naive solution
// O( n * log n ) => Time
bool isAnagram_1(string a, string b) {

    // Your code here
    if (a.length() != b.length()) {
        return false;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return (a == b);
}

// efficient solution
// O( n ) => Time
bool isAnagram(const string &a, const string &b){
    if(a.length() != b.length()){
        return false;
    }
    const int CHAR = 256;
    int count[CHAR] = {0};
    for (int i = 0; i < CHAR; ++i) {
        count[a[i]]++;
        count[b[i]]--;
    }

    for(int i = 0; i < CHAR; i++){
        if(count[i] != 0){
            return false;
        }
    }
    return true;
}



int main() {
    string s1 = "geeksforgeeks";
    string s2 = "forgeeksgeeks";

    cout << boolalpha << isAnagram(s1,s2);

    return 0;
}
