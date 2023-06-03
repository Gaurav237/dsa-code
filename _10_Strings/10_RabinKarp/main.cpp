// Rabin Karp Algorithm
// Time Complexity => O((N-M+1)*M) in worst case

#include <bits/stdc++.h>
using namespace std;

void RBSearch(string Txt,string Pat){
    int N = Txt.length();
    int M = Pat.length();
    int d = 5, q = 23; // q  => prime no.

    // Compute (d^(n-1) % q)
    int h = 1;
    for(int i = 1; i <= M - 1; i++){
        h = (h * d) % q;
    }
    // ...

    // Compute p(hash value of Pattern) and t0 (hash value of first window)
    int p = 0, t = 0;
    for(int i = 0; i < M; i++){
        p = (p*d + Pat[i]) % q;
        q = (t*d + Txt[i]) % q;
    }
    // ...

    // Check for spurious hit
    for(int i = 0; i <= N-M; i++){
        if(p == t){
            bool flag = true;
            for(int j = 0; j < M; j++){
                if(Txt[i+j] != Pat[j]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                cout << i << " ";  // pattern matched
            }
        }
        // ...

        // Compute t{i+1} using t{i}
        if(i < (N-M)){
            t = ( (d * (t - (Txt[i] * h))) + Txt[i + M] ) % q;
            if(t < 0){
                t = t + q;
            }
        }
        // ...
    }

}

int main() {
    RBSearch("AAAAA","AAA");


    return 0;
}
