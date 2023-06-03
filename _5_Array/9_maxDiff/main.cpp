// max difference of a[j] - a[i], where j > i .

#include <bits/stdc++.h>
using namespace std;

//int max_diff(const int a[], int n){
//    int min = a[0];
//    int min_ind = 0;
//    int i;
//    for(i = 1; i < n-2; i++){
//        if(min > a[i]){
//            min = a[i];
//            min_ind = i;
//        }
//    }
//    int max = a[i+1];
//    int max_ind = i+1;
//    int j;
//    for(j = i+2; j < n; j++){
//        if(max < a[j]){
//            max = a[j];
//            max_ind = j;
//        }
//    }
//    return max - min;
//}


// naive approach :
// O(n^2) => Time complexity.
int max_diff_1(const int a[], int n){
    int dif = a[1] - a[0];
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n - 1; j++){
            dif = max(dif, a[j] - a[i]);
        }
    }
    return dif;
}

int main() {
    int a[] = {2,3,10,6,4,8,1};
    int n = 7;

    cout << max_diff_1(a,n);

    return 0;
}
