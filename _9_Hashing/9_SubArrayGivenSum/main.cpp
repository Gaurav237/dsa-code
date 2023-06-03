#include <bits/stdc++.h>
using namespace std;

bool SubArrayGivenSum(const int A[], int n, int sum) {
    unordered_set<int> s;
    int prefixSum = 0;
    for (int i = 0; i < n; i++) {
        if(s.find(prefixSum - sum) != s.end()){
            return true;
        }
        if(prefixSum == sum){
            return true;
        }
        s.insert(prefixSum);
    }
    return false;
}

int main() {
    int arr[] = {5,8,6,13,3,-1};
    int n = 6;
    int sum = 22;

    cout << boolalpha << SubArrayGivenSum(arr,n,sum);
    return 0;
}
