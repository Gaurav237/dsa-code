#include <bits/stdc++.h>
using namespace std;

void TwoOddOcc(int arr[], int N){
    
    // calculate xor
    long long int x = 0;
    for(int i = 0; i < N; i++){
        x = x ^ arr[i];
    }
    
    // find righmost set bit
    int rs = x & ~(x-1);
        
    // group wise divide based on set bit
    int res1 = 0;
    int res2 = 0;
    for(int i = 0; i < N; i++){
        if(rs & arr[i]){
            res1 = res1 ^ arr[i];
        }else{
            res2 = res2 ^ arr[i];
        }
    }
        
    cout << res1 << " " << res2 <<  endl;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[] = {4,3,3,3,4,4,4,5,5};
    // int arr[] = {8,7,7,8,8};
    // int arr[] = {9};
    int n = sizeof(arr)/sizeof(arr[0]);

    TwoOddOcc(arr, n);

    return 0;
}
