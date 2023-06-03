/* Remove Duplicates in-place from Sorted Array */

#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[] = {1,1,2,2,2,3,3};
    int n = 7;

    int ind = 0;
    for(int i = 0; i < n; i++){
        cout << i << endl;
        int x = i;
        while(arr[x] == arr[x+1]){
            x++;
        }
        arr[ind++] = arr[i];
        i = ++x;
    }

    cout << ind << endl;
    // for(int i = 0; i < ind; i++){
    //     cout << arr[i] << endl;
    // }

    return 0;
}
