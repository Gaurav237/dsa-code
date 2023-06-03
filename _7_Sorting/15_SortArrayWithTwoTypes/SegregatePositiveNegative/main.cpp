// we need to segregate two types of elements, and the sinngle type might not be sorted but it must be together

#include <bits/stdc++.h>
#define ll long long
using namespace std;

// Efficient
// Time : Theta(n)
void segregatePositiveNegative(vector<int> &arr){
    int i = -1;

    for(int j = 0; j < arr.size(); j++){
        if(arr[j] < 0){
            i++;
            swap(arr[i], arr[j]);
        }
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v = {-5,15,8,7,-2,-6,4};

    segregatePositiveNegative(v);

    for(int e : v){
        cout << e << " ";
    }

    return 0;
}
