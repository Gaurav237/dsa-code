#include <bits/stdc++.h>
using namespace std;

void permute(string &st, int i){
    if(i == st.length() - 1){
       cout << st << "\t";
       return;
    }

    for(int j = i; j < st.length(); j++){
       swap(st[i], st[j]);
       permute(st, i + 1);
       swap(st[j], st[i]);
    }
}

int main(){
    string st = "ABCD";

    permute(st, 0);

    return 0;
}