#include <bits/stdc++.h>
using namespace std;

// Naive
// Time => O( n^(1/2) )
int sqRootFloor_1(int n){
    int i = 1;
    while(i*i <= n){
        i++;
    }
    return i - 1;
}

// Efficient
// Time => O( log n )
int sqRootFloor(int n){
    int low = 0;
    int high = n;
    int ans = -1;
    while(low <= high){
        int mid = (low+high)/2;
        if(mid*mid == n){
            return mid;
        }else if(mid*mid > n){
            high = mid - 1;
        }else{
            ans = mid;
            low = mid + 1;
        }
    }
    return ans;
}


int main() {
    cout << sqRootFloor(25);

    return 0;
}
