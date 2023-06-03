#include <bits/stdc++.h>
using namespace std;

// Naive Solution :
// O(n^2) => Time complexity.
vector<int> leader_1(const int a[], int n){
    vector<int> v;
    for(int i = 0; i < n; i++){
        if(i == (n-1)){
            v.push_back(a[i]);
            break;
        }
        int rmax = a[i+1];
        for(int j = i + 2; j < n; j++){
            if(rmax < a[j]){
                rmax = a[j];
            }
        }
        if(rmax < a[i]){
            v.push_back(a[i]);
        }
    }
    return v;
}

// efficient solution:
// O(n) => Time Complexity.
vector<int> leader(const int a[], int n){
    vector<int> v;
    v.push_back(a[n-1]);
    int max = a[n-1];
    for(int i = n-2; i >= 0; i--){
        if(max < a[i]){
            max = a[i];
            v.push_back(max);
        }
        /*
        if(a[i+1] > max){
            max = a[i+1];
        }
        if(a[i] > max){
            v.push_back(a[i]);
        }
        */
    }
    return v;
}

int main() {
    int a[] = {16,17,4,3,5,2};
    int n = 6;
//    int a[] = {1,2,3,4,0};
//    int n = 5;
//    int a[] = {7,10,4,3,6,5,2};
//    int n = 7;
//    int a[] = {10,20,30};
//    int n = 3;
//    int a[] = {30,20,10};
//    int n = 3;

    vector<int> v = leader(a,n);

    for(unsigned int i = v.size() - 1; i >= 0; i--){
        cout << v[i] << " ";
    }

    return 0;
}
