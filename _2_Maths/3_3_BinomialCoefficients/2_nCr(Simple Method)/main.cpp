 #include <bits/stdc++.h>
using namespace std;

int fact(int n){
    int res = 1;
    for(int i = 2; i <= n; i++){
        res = res * i;
    }
    return res;
}

int combinations_1(int n, int r){

    return ( fact(n) / (fact(n-r) * fact(r)) );
}

// removed extra multiplication, in this computation
int combinations_2(int n, int r){
    int x = n - r;
    if(n-r > r){
        x = r;
    }
    int X = fact(x);

    int N = n;
    for(int i = 1; i < x; i++){
        n--;
        N = N * n; 
    }

    return N / X;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 6;
    int r = 2;    

    cout << combinations_1(n,r) << "\n";

    return 0;
}
