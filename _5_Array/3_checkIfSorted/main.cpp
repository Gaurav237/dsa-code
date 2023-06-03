#include <iostream>
using namespace std;

bool is_sorted(const int a[], int n){
    bool res = true;
    for(int i = 0; i < n-1; i++){
        if(a[i] > a[i+1]){
            res = false;
            break;
        }
    }
    return res;
}

int main() {
//int a[] = {8,12,15};
//int n = 3;

//int a[] = {8,10,10,12};
//int n = 4;

//int a[] = {100};
//int n = 1;

int a[] = {100,20,200};
int n = 3;

    cout << boolalpha << is_sorted(a,n);

    return 0;
}
