#include <bits/stdc++.h>
using namespace std;

// naive approach
// O(m * n) => Time Complexity
vector<int> intersection_1(int a[], int b[], int a_size, int b_size){
    vector<int> v;
    for(int i = 0; i < a_size; i++) {
        if(i != 0 && a[i] == a[i-1]){
            continue;
        }
        for (int j = 0; j < b_size; ++j) {
            if(a[i] == b[j]){
                v.push_back(a[i]);
                break;
            }
        }

    }
    return v;
}

// efficient approach
// O(n) => Time
vector<int> intersection(int a[], int b[], int a_size, int b_size){
    vector<int> v;
    int x = 0;
    int y = 0;
    while(x < a_size && y < b_size){

        if(x > 0 && a[x] == a[x-1]){
            x++;
            continue;
        }
//        if(y > 0 && b[y] == b[y-1]){
//            y++;
//            continue;
//        }
        if(a[x] == b[y]){
            v.push_back(a[x]);
            x++;
            y++;
        }else{
            if(a[x] < b[y]){
                x++;
            }else{
                y++;
            }
        }
    }
    return v;
}

// both are sorted arrays
int main() {
    int a[] = {3,5,10,10,10,15,15,20};
    int a_size = 8;
    int b[] = {5,10,10,15,30};
    int b_size = 5;

    vector<int> v = intersection(a,b,a_size,b_size);
    for(int e : v){
        cout << e << " ";
    }

    return 0;
}
