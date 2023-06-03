#include <bits/stdc++.h>
#define ll long long
using namespace std;

/* sum of first N numbers */

/* 1) Functional Recursion */
int func1(int N){
    if(N == 0){
        return 0;
    }

    return N + func1(N-1); 
}

/* 2) Parameterised Recursion */
void func2(int N, int sum){
    if(N < 1){
        cout << sum << endl;
        return;
    }

    func2(N-1, sum+N);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << func1(5) << endl;

    func2(5, 0);

    return 0;
}
