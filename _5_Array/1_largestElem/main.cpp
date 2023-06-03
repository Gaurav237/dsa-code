#include <iostream>
using namespace std;

int largest_elem(int arr[], int n){
    int max = arr[0];
    int max_index = 0;
    for(int i = 1; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
            max_index = i;
        }
    }
    return max_index;
}

int main() {
//    int arr[] = {10, 5, 20, 8};
    int arr[] = {40, 8, 50, 100};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << largest_elem(arr, n);

    return 0;
}
