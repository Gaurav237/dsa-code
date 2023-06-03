#include <bits/stdc++.h>
#define ll long long
using namespace std;

/* print linearly from 1 to N (using backtracking)*/

void func(int count){
    if(count == 0){
        return;
    }
    func(count-1);
    cout << count << endl;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    func(5);

    return 0;
}
