#include <bits/stdc++.h>
using namespace std;

// naive approach
// O( n ^ 2 ) => Time
int count_inversion_1(const int a[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                ++count;
            }
        }
    }
    return count;
}

int count_inversion(int a[], int l, int r){
    int count = 0;
    if(l < r){
        int m = l + (r-l)/2;
        count += count_inversion(a,l,m);
        count += count_inversion(a,m+1,r);
        count += countAndMerge(a,l,m,r);

    }

    return count;
}
int main() {
//    int a[] = {2,4,1,3,5};
//    int n = 5;
//    int a[] = {10,20,30,40,50};
//    int n = 5;
    int a[] = {50,40,30,20,10};
    int n = 5;

    cout << count_inversion(a,n);


    return 0;
}
