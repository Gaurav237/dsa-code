// intersection of two arrays (count only distinct common elements)
#include <bits/stdc++.h>
using namespace std;

// using unordered_map : my attempt
int intersect_1(int a[], int b[], int m, int n){
    unordered_map<int,int> ha,hb;

    for(int i = 0; i < m; i++){
        ha[a[i]]++;
    }
    for(int i = 0; i < n; i++){
        hb[b[i]]++;
    }
    int res = 0;
    for(auto x : hb){
        if(ha[x.first] > 0){
            res++;
        }
    }
    return res;
}

// using unordered_set
int intersect_2(int a[], int b[], int m, int n){
    unordered_set<int> s;
    for(int i = 0; i < m; i++){
        s.insert(a[i]);  // it will insert in set only if the element is not present already.
    }
    int res = 0;
    for(int i = 0; i < n; i++){
        if(s.find(b[i]) != s.end()){
            res++;
            s.erase(b[i]);
        }
    }
    return res;
}

int main() {
    int a[] = {10,15,20,15,30,30,5};
    int m = 7;
    int b[] = {30,5,30,80};
    int n = 4;
    // output : 2

//    int a[] = {10,20};
//    int b[] = {20,30};
//    output : 1

//    int a[] = {10,10,10};
//    int b[] = {10,10,10};
//    output : 1

    cout << intersect_2(a,b,m,n);


    return 0;
}
