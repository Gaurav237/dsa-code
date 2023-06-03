#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define START first
#define END second
typedef pair<int, int> pii;

void mergeIntervals(vector<pair<int, int>> arr){
    sort(arr.begin(), arr.end());
    int n = arr.size();
    vector<pair<int,int>> mergedArr;
    int m = 0;
    mergedArr.push_back(arr[0]);

    for(int i = 1; i < n; i++){
        if(mergedArr[m].END >= arr[i].START){
            // then merge this pair
            mergedArr[m].START = min(mergedArr[m].START, arr[i].START);
            mergedArr[m].END = max(mergedArr[m].END, arr[i].END);
        }else{
            // insert a new pair, as this is non-overlapping
            m++;
            mergedArr.push_back(arr[i]);
        }
    }

    // printing merged array
    for(int i = 0; i <= m; i++){
        cout << "{" << mergedArr[i].START << ", " << mergedArr[i].END << "}, ";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<pii> v = {{5,10}, {3,15}, {18,30}, {2,7}};

    mergeIntervals(v);

    return 0;
}
