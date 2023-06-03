// we need to segregate two types of elements, and the sinngle type might not be sorted but it must be together

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void segregateEvenOdd(vector<int> &arr){
    int i = -1;

    for(int j = 0; j < arr.size(); j++){
        if(arr[j] % 2 == 0){
            i++;
            swap(arr[i], arr[j]);
        }
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v = {15,17,14,13,12,19,26};

    segregateEvenOdd(v);

    for(int e : v){
        cout << e << " ";
    }

    return 0;
}
