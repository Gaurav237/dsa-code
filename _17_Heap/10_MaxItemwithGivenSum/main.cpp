#include <bits/stdc++.h>
using namespace std;

// O( count * ( log n ) ) ===> O (n * log n)
int MaxItem(int arr[], int n, int sum){
    priority_queue<int,vector<int>,greater<>> pq;

    // O(n) : Building Heap
    for(int i = 0; i < n; i++){
        pq.push(arr[i]);
    }
    // ...

    // O( count * ( log n ) )
    int count = 0;
    while(sum >= pq.top()){
        count++;
        sum -= pq.top();
        pq.pop();  // O(log n) : removing item from heap is log n operation.
    }
    // ...

    return count;
}



int main() {
//    int cost[] = {1,12,5,111,200};
//    int n = 5;
//    int sum = 10;

    int cost[] = {20,10,5,30,100};
    int n = 5;
    int sum = 35;

    cout << MaxItem(cost,n,sum);

    return 0;
}
