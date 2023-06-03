#include <bits/stdc++.h>
#define ll long long
using namespace std;

// Naive
// Time: O(n^2)
int largestHistogramRectangularArea(vector<int> &arr){
    int n = arr.size();
    int res = 0;

    for(int i = 0; i < n; i++){
        int curr = arr[i]; 

        // on right side
        for(int j = i + 1; j < n; j++){
            if(arr[j] >= arr[i]){
                curr += arr[i];
            }else{
                break;
            }
        }

        // on left side
        for(int j = i - 1; j >= 0; j--){
            if(arr[j] >= arr[i]){
                curr += arr[i];
            }else{
                break;
            }
        }

        res = max(res, curr);
    }
    
    return res;
}

// int largestHistogramRectangularArea(vector<int> &arr){

// }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {6, 2, 5, 4, 5, 1, 6};

    cout << largestHistogramRectangularArea(arr);


    return 0;
}
