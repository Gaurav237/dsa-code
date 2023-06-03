#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(vector<int> &arr){
    int low = 0;
    int mid = 0;
    int high = arr.size() - 1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }else if(arr[mid] == 1){
            mid++;
        }else{ // arr[mid] == 2
            swap(arr[high], arr[mid]);
            high--;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v = {0,1,2,1,1,2};

    solve(v);

    for(int e : v){
        cout << e << " ";
    }

    return 0;
}
