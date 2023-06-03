#include <bits/stdc++.h>
using namespace std;

void powerSet(string str){
    int len = str.length();
    int power_set_size = pow(2,len);

    for(int counter = 0; counter < power_set_size; counter++){
        for(int j = 0; j < len; j++){
            if(counter & (1 << j)){
                cout << str[j];
            }
        }
        cout << "\n";
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str = "abc";
    powerSet(str);

    return 0;
}
