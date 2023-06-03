#include <bits/stdc++.h>
#define ll long long
using namespace std;

/* print from N to 1 (using backtracking)*/

void func(int start, int end){
    if(start > end){
        return;
    }

    func(start+1, end);
    cout << start << endl;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    func(1, 5);

    return 0;
}
