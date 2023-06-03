#include <bits/stdc++.h>
#define ll long long
using namespace std;

/* print from N to 1 */

void func(string &st, int count){
    if(count == 0){
        return;
    }
    cout << count << endl;
    func(st, count-1);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string st = "striver";

    func(st, 5);

    return 0;
}
