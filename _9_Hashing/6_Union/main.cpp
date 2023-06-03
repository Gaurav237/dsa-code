// counting union of two arrays.(ignoring duplicate elements)

#include <bits/stdc++.h>
using namespace std;

// naive solution
int union_1(int a[],int b[],int m,int n){
    int C[m+n];
    for(int i = 0; i < m; i++){
        C[i] = a[i];
    }
    for(int i = 0; i < n; i++){
        C[i+m] = b[i];
    }
    int res = 0;
    for(int i = 0; i < m+n; i++){
        bool flag = false;
        // to check if element has same element in previous array.
        for(int j = 0; j < i; j++){
            if(C[i] == C[j]){
                flag = true;
                break;
            }
        }
        if(!flag){
            res++;
        }
    }
    return res;
}

// efficient solution
int union_2(int a[],int b[],int m,int n){
    unordered_set<int> s;

    for(int i = 0; i < m; i++){
        s.insert(a[i]);
    }

    for(int i = 0; i < n; i++){
        s.insert(b[i]);
    }

    return s.size();
}



int main() {
    int a[] = {15,20,5,15};
    int b[] = {15,15,15,20,10};

//    int a[] = {10,12,15};
//    int b[] = {18,12};

//    int a[] = {3,3,3};
//    int b[] = {3,3};

    cout << union_1(a,b,4,5);

    return 0;
}
