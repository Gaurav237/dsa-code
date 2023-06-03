// more efficient solution is possible.
#include <iostream>
using namespace std;

// Naive Solution
int sec_largest_elem(const int arr[], int n){
    int max = -1;
    for(int i = 0; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    int sec_max = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] != max){
            if(arr[i] >= sec_max){
                sec_max = arr[i];
            }
        }
    }

    return sec_max;
}

int main() {
    int arr[] = {10,5,8,20};
    int n = 4;
//    int arr[] = {20,10,20,8,12};
//    int n = 5;

    cout << sec_largest_elem(arr, n);

    return 0;
}
