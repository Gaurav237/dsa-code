// reversal algorithm  ==> most efficient.
#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void reverse_array(int arr[], int low, int high){
    while(low < high){
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

void left_rotate(int arr[], int n, int d){
    reverse_array(arr,0,d-1);
    reverse_array(arr,d,n-1);
    reverse_array(arr,0,n-1);
}

int main() {
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int d = 2;

    left_rotate(arr,n,d);

    for(int e : arr){
        cout << e << " ";
    }
    return 0;
}
