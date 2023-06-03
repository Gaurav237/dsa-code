#include <iostream>
//#include <string>
using namespace std;

void freq(string st){
    unsigned int n = st.length();
    int a[26] = {0};

    for(int i = 0; i < n; i++){
        a[(int)(st[i]) - 97]++;
    }

    for(int i = 0; i < 26; i++){
        if(a[i] > 0){
            cout << (char)(i + 97) << " " << a[i] << "\n";
        }
    }
}

int main() {
    string st = "geeksforgeeks";
    freq(st);

    return 0;
}
