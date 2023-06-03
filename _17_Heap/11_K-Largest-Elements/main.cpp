#include <bits/stdc++.h>
using namespace std;

// using Max Heap
// O( n + k * log n )
vector<int> K_Largest_1(int arr[], int n, int k){
    priority_queue<int> pq;
    vector<int> v;
    for(int i = 0; i < n; i++){
        pq.push(arr[i]);
    }

    for(int i = 0; i < k; i++){
        v.push_back(pq.top());
        pq.pop();
    }

    return v;
}

// EFFICIENT
// using Min Heap
// O( k + (n-k) * log k ) ==> O(n * log k)
void K_Largest(int arr[], int n, int k){
    priority_queue<int,vector<int>,greater<>> pq;

    // O( k )
    for(int i = 0; i < k; i++){
        pq.push(arr[i]);
    }
    //.

    // O( (n-k) * log k )
    for(int i = k; i < n; i++){
        if(arr[i] > pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    //.

    // O(k)
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    //.
}

int main() {
    int arr[] = {5,15,10,20,8};
    int n = 5;
    int k = 2;

//    vector<int> v = K_Largest_1(arr,n,k);
//    for(auto it = v.rbegin(); it != v.rend(); it++){
//        cout << *it << " ";
//    }

    K_Largest(arr,n,k);

    return 0;
}
