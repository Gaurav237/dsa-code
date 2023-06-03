/* 

*/


#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool solve(vector<vector<int>> &mat, int target){
    if(mat.size() == 0){ return false; }

    int m = mat.size();
    int n = mat[0].size();

    int low = 0;
    int high = (m*n) - 1;

    while (low <= high){
        int middle = (low+high)/ 2;

        if(mat[middle/n][middle%n] == target){
            return true;
        }else if(mat[middle/n][middle%n] < target){
            low = middle + 1;
        }else{
            high = middle - 1;
        }
    }
    return false;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<vector<int>> mat = {{1,3,5,7},
                    {10,11,16,20},
                    {23,30,34,60}};

    cout << boolalpha << solve(mat, 21) << endl;

    return 0;
}
