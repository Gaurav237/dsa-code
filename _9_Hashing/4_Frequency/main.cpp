#include <bits/stdc++.h>
using namespace std;

// efficient solution
// time => Theta(n)
// aux => O(n)
void frequency_2(int arr[], int n){
    unordered_map<int,int> h; // { number , count }
    for(int i = 0; i < n; i++){
        h[arr[i]]++;
    }
    for(auto x : h){
        cout << x.first << " " << x.second << "\n";
    }
}

int main() {
    int arr[] = {10,12,10,15,10,20,12,12};
    int n = 8;

    frequency_2(arr,n);

    return 0;
}
