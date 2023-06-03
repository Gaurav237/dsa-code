#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
    if(b == 0){
        return a;
    }

    return GCD(b, a % b);
}

// Naive
// Time: O(a*b - max(a,b))
int LCM_1(int a, int b){
    int res = max(a,b);

    while(true){
        if(res % a == 0 && res % b == 0){
            return res;
        }
        res++;
    }
}

// Efficient
// Time: O( log(min(a,b)) )
int LCM_2(int a, int b){
    return (a * b) / GCD(a,b);
}




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    
    int a = 3;
    int b = 7;

    cout << LCM_1(a,b) << endl;

    return 0;
}
