// reverse words in a string.

#include <bits/stdc++.h>
using namespace std;

vector<char> reverse_string(string str){
    vector<char> ch;
    for(int i = str.length(); i >= 0; i--){
        if(str[i] == ' ' || i == 0){
            int x = i + 1;
            if(i == 0){
                x = 0;
            }
            while(str[x] != ' ' && x < str.length()){
                ch.push_back((char)str[x]);
                x++;
            }
            ch.push_back(' ');
        }

    }
    return ch;
}

// naive
// using stack
//string reverse_2(string str){
//    stack<string> myStack;
//
//
//}

void reverseWords(char str[], int n){
    int start = 0;
    for(int end = 0; end < n; end++){
        if(str[end] == ' ') {
            reverse(str + start, str + end);
            start = end + 1;
        }
    }
    reverse(str,str + n);
}


int main() {
    char str[] = "Welcome to gfg";
    int n = 14;

    reverseWords(str,n);
    for(char e : str){
        cout << e;
    }


    return 0;
}
