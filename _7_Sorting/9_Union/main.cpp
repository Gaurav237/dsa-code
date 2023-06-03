#include <bits/stdc++.h>
using namespace std;

vector<int> unionArray(int a[], int b[], int a_size, int b_size){
    vector<int> v;
    int x = 0;
    int y = 0;
    while(x < a_size && y < b_size){
        if(x > 0 && a[x-1] == a[x]){
            x++;
            continue;
        }
//        if(y > 0 && b[y-1] == b[y]){
//            y++;
//            continue;
//        }
        if(a[x] < b[y]){
            v.push_back(a[x]);
            x++;
        }else if(a[x] > b[y]){
            v.push_back(b[y]);
            y++;
        }else{
            v.push_back(a[x]);
            x++;
            y++;
        }
    }

    while(x < a_size){
        if(x > 0 && a[x-1] == a[x] && a[x-1] == b[y]){
            v.push_back(a[x]);
        }
        x++;
    }

    while(y < b_size){
        if(y > 0 && b[y-1] != b[y]){
            v.push_back(b[y]);
        }
        y++;
    }

    return v;
}

int main() {
    int a[] = {3,5,8};
    int b[] = {2,8,9,10,15};
    int a_size = 3;
    int b_size = 5;

    vector v = unionArray(a,b,a_size,b_size);

    for(int e : v){
        cout << e << " ";
    }

    return 0;
}
