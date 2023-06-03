#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nextPermutation(vector<int> &arr){
    int n = arr.size();
    int i;
    int j;

    for(i = n-2; i >= 0; i--){
        if(arr[i] < arr[i+1]){
            break;
        }
    }

    // if greatest permutation, then pivot will not be found
    if(i < 0){ // i == -1
        reverse(arr.begin(), arr.end());
    }else{
        // else, if pivot is found
        // find successor of pivot in suffix
        for(j = n-1; j > i; j--){
            if(arr[j] > arr[i]){
                break;
            }
        }

        swap(arr[i], arr[j]);

        reverse(arr.begin() + i + 1, arr.end());
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {2,4,1,7,5,0};

    nextPermutation(arr);

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    } 

    return 0;
}
