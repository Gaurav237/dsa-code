#include <iostream>
#include <vector>
using namespace std;

// O( m + n ) => Time Complexity
int* merge(const int a[], const int b[], int n, int m){
    int *c = new int[m+n];

    int i = 0, x = 0, y = 0;
    while(x < n && y < m){
        if(a[x] <= b[y]){
            c[i++] = a[x++];
        }else{
            c[i++] = b[y++];
        }
    }
    while(x < n){
        c[i++] = a[x++];
    }
    while(y < m){
        c[i++] = b[y++];
    }
    return c;
}

int main() {
    int a[] = {10,15,20};
    int n = 3;
    int b[] = {5,6,6,15};
    int m = 4;

    int* ptr = merge(a,b,n,m);

    for(int i = 0 ; i < m+n; i++){
        cout << ptr[i] << " ";
    }

    return 0;
}
