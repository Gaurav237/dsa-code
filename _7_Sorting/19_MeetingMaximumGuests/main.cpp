#include <bits/stdc++.h>
#define ll long long
using namespace std;

int maxGuests(int arr[], int dep[], int n){
    sort(arr, arr + n);
    sort(dep, dep + n);

    int i = 0;
    int j = 0;
    int guest = 0;
    int res = guest;

    while(i < n && j < n){
        if(arr[i] <= dep[j]){  // guest arrived
            guest++;
            i++;
        }else{  // guest departured
            guest--;
            j++;
        }
        res = max(res, guest);
    }
    return res;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 00:00 <= arr[i], dep[i] <= 23:59
    int arr[] = {800, 700, 600, 500};   // arrival time 
    int dep[] = {840, 820, 830, 530};  // departure time 
    // here 940 means 9:40, 1000 means 10:00
    int n = 4;    

    cout << maxGuests(arr, dep, n);

    return 0;
}
