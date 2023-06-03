// we have to move zeroes at the end of the same array, maintaining the same order.
#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

// Naive solution :
// O(n^2) => Time Complexity
void move_zeroes_to_end_1(int a[], int n){
    for(int i = 0; i < n; i++){
        if(a[i] == 0){
            for(int j = i + 1; j < n; j++){
                if(a[j] != 0){
                    swap(a[i],a[j]);
                    break;
                }
            }
        }
    }
}

// Efficient Solution : in one traversal.
// O(n) => Time Complexity
void move_zeroes_to_end(int a[], int n){
    int z = 0;
    for(int i = 0; i < n; i++){
        if(a[i] != 0){
            swap(a[i], a[z]);
            z++;
        }
    }
}

int main() {
//    int a[] = {8,5,0,10,0,20};
//    int n = 6;
//    int a[] = {0,0,0,10,0};
//    int n = 5;
    int a[] = {10,20};
    int n = 2;

    for(int e : a){
        cout << e << " ";
    }
    cout << "\n";

    move_zeroes_to_end(a,n);
    for(int e : a){
        cout << e << " ";
    }

    return 0;
}
