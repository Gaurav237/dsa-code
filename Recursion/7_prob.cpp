#include <bits/stdc++.h>
#define ll long long
using namespace std;

/* reverse an array */
void func(int arr[], int start, int end){
    if(start >= end){
        return;
    }

    // swap First and Last Index elements
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    func(arr, start+1, end-1);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[] = {1,2,3,4,5};

    func(arr, 0, 4);

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
