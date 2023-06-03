#include <bits/stdc++.h>
#define ll long long
using namespace std;

/* print linearly from 1 to N */

void func(int start, int count){
    if(start > count){
        return;
    }
    cout << start << endl;
    func(start + 1, count);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    func(1, 5);

    return 0;
}
