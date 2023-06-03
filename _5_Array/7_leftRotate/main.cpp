#include <iostream>
using namespace std;

// naive solution :
// O(n) => Time
// O(n) => Auxiliary Space.
void leftRotate_1(int a[], int n, int d){
    int temp[d];
    for(int i = 0; i < d; i++){
        temp[i] = a[i];
    }
    for(int i = 0; i < (n-d); i++){
        a[i] = a[i + d];
    }
    for(int i = n-d, j = 0; i < n; i++, j++){
        a[i] = temp[j];
    }
}


int main() {
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int d = 2;

    for(int e : arr){
        cout << e << " ";
    }
    cout << "\n";

    leftRotate_1(arr,5,2);

    for(int e : arr){
        cout << e << " ";
    }

    return 0;
}
