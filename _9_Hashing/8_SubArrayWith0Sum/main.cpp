#include <bits/stdc++.h>
using namespace std;

// naive
// O(n^2)
bool SubArray0Sum_1(const int A[], int n){
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += A[j];
            if(sum == 0){
                return true;
            }
            sum += A[j];
        }
    }
    return false;
}

// efficient solution
// O( n )
bool SubArray0Sum(const int A[], int n) {
    unordered_set<int> s;
    int prefixSum = 0;
    for (int i = 0; i < n; i++) {
        prefixSum += A[i];
        if(s.find(prefixSum) != s.end()){
            return true;
        }
        if(prefixSum == 0){
            return true;
        }
        s.insert(prefixSum);
    }
    return false;
}

int main() {
//    int a[] = {1,4,13,-3,-10,5};
//    int n = 6;
//    int a[] = {-1,4,-3,5,1};
//    int n = 5;
//    int a[] = {3,1,-2,5,6};
//    int n = 5;
    int a[] = {5,6,0,8};
    int n = 4;

    cout << boolalpha << SubArray0Sum(a,n);

    return 0;
}
