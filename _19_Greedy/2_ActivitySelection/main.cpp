// Maximum no. of activities that can happen on a single tasking machine.

#include <bits/stdc++.h>
using namespace std;

bool my_compare_second(pair<int,int> p1, pair<int,int> p2){
    return (p1.second < p2.second);
}

int max_activity_selection(pair<int,int> par[], int n){
    // sort according to increasing FINISH time
    sort(par, par + n, my_compare_second);

    // choose first activity as curr selected activity
    pair<int,int> curr = par[0];
    int count = 1;

    // add the activity if last activity, does not overlap with curr activity
    for(int i = 1; i < n; i++){
        if(curr.second <= par[i].first){
            curr = par[i];
            count++;
        }
    }
    return count;
}

int main() {
//    pair<int,int> pr[] = {{1,4},{2,3},{5,8},{6,10}};
//    int n = 4;
    pair<int,int> pr[] = {{1,3},{2,4},{3,8},{10,11}};
    int n = 4;

    cout << max_activity_selection(pr,n) << endl;

    return 0;
}
