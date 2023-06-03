#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Time Complexity  =>  O( n * log n )
// uses hybrid of quicksort, heapsort and insertion sort

int main() {
    /*
     * Array Sorting
    int arr[] = {2,5,1,8,3,0};
    int n = 6;

    // increasing order.
    sort(arr, arr + n);
    for(int e : arr){
        cout << e << " ";
    }
    cout << endl;

    // decreasing order.
    sort(arr, arr + n, greater<>());
    for(int e : arr){
        cout << e << " ";
    }
    */

    vector<int> v = {7,5,20,10,43,1};

    sort(v.begin(), v.end());
    for(int e : v){
        cout << e << " ";
    }
    cout << endl;

    sort(v.begin(), v.end(), greater<>());
    for(int e : v){
        cout << e << " ";
    }

    return 0;
}
