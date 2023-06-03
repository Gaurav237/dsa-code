/*
 ***** INSERTION SORT *****
  1) O( n^2 ) => Worst case.  (when array is in descending order)
  2) O ( n )  => Best case.   (when array is in ascending order)
  3) In-place (doesn't take extra auxiliary space) and Stable sort.
  4) Used in practice for small arrays ( TimSort and IntroSort ).
 */

#include <iostream>
using namespace std;

/*
void swap(int &a, int &b){
    int temp = a;
     a = b;
     b = temp;
}

 // my first implementation.
void insertion_sort(int a[], int n){
    for(int i = 1; i < n; i++){
        for(int j = i; j > 0; j--){
            if(a[j] < a[j-1]){
                swap(a[j],a[j-1]);
            }else{
                break;
            }
        }
    }
}
 */

void insertion_sort(int a[], int n){
    for(int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;
        while (a[j] > key && j >= 0) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

int main() {
    int a[] = {20,5,40,60,10,30};
    int n = 6;
    for(int e : a){
        cout << e << " ";
    }
    cout << "\n";

    insertion_sort(a,n);
    for(int e : a){
        cout << e << " ";
    }

    return 0;
}
