#include <iostream>
using namespace std;

// naive solution => temp array is created.
// O(n) => Time
// O(n) => Space
int remove_duplicates_1(int a[], int n){
    int temp[n];
    int size = 1;
    temp[0] = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] != temp[size - 1]){
            temp[size] = a[i];
            size++;
        }
    }
    for(int i = 0; i < size; i++){
        a[i] = temp[i];
    }
    return size;
}


// efficient solution => here same no extra temporary array is created.
// O(n) => Time
// O(1) => Space
int remove_duplicates(int a[], int n){
    int size = 1;
    for(int i = 1; i < n; i++){
        if(a[i] != a[size - 1]){
            a[size] = a[i];
            size++;
        }
    }
    return size;
}

int main() {
    int a[] = {10,20,20,30,30,30,30};
    int n = 7;

//    int size = 1;
//    for(int i = 0; i < n; i++){
//        if(a[i] == a[i+1]){
//            for(int x = i+1; x < n - 1; x++){
//                a[x] = a[x+1];
//            }
//        }else{
//            size++;
//        }
//    }


    int size = remove_duplicates(a,n);

    for(int i = 0; i < size; i++){
        cout << a[i] << " ";
    }

    return 0;
}
