#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

// O(n^2) => time complexity.
void selection_sort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        int min_ind = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[min_ind]){
                min_ind = j;
            }
        }
        swap(a[min_ind], a[i]);
    }
}

int main() {
    int a[] = {10,5,8,20,2,18};
    int n = 6;
    for(int e : a){
        cout << e << " ";
    }
    cout << "\n";

    selection_sort(a,n);
    for(int e : a){
        cout << e << " ";
    }

    return 0;
}
