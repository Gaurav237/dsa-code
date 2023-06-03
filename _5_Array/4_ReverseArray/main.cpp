#include <iostream>
using namespace std;

void swap(int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
}

void rev_array(int arr[], int n){
    for(int i = 0, j = n-1; i < j; ++i, --j){
        swap(arr[i], arr[j]);
    }
}

int main() {
//    int arr[] = {10,5,7,30};
//    int n = 4;

    int arr[] = {30,20,5};
    int n = 3;

    rev_array(arr, n);

    for(int x : arr){
        cout << x << " ";
    }

    return 0;
}
