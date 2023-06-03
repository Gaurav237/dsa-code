/*
 After every pass, maximum element reaches to its final position, then next maximum..
 */

#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

// O(n^2) => Time
void bubble_sort(int a[], int n){
    for(int i = 0; i < n - 1; i++){  // outer loop => for no. of passes
        bool swapped = false;
        for(int j = 0; j < n - i - 1; j++){  // for adjacent elements comparison.
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}

int main() {
    int a[]= {20 ,10,8,7};
    int n = 4;
    for(int e : a){
        cout << e << " ";
    }
    cout << endl;

    bubble_sort(a,n);

    for(int e : a){
        cout << e << " ";
    }

    return 0;
}
