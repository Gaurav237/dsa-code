#include <bits/stdc++.h>
using namespace std;

void K_Closest(int arr[], int n, int x, int k){
    priority_queue<pair<int,int>> pq;

    for(int i = 0; i < k; i++){
        int diff = abs(arr[i] - x);
        pq.push(pair<int,int>(diff,i));
    }

    for(int i = k; i < n; i++){
        int diff = abs(arr[i] - x);
        if(diff < pq.top().first){
            pq.pop();
            pq.push(pair<int,int>(diff,i));
        }
    }

    while(!pq.empty()){
        cout << arr[pq.top().second] << " ";
        pq.pop();
    }
}

int main() {
//    int arr[] = {10,15,7,3,4};
//    int n = 5;
//    int x = 8;
//    int k = 2;

//    int arr[] = {100,80,10,5,70};
//    int n = 5;
//    int x = 2;
//    int k = 3;

    int arr[] = {20,40,5,100,150};
    int n = 5;
    int x = 100;
    int k = 3;

    K_Closest(arr,n,x,k);

    return 0;
}
