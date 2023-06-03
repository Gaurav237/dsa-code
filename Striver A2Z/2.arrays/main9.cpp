/* Find the Union */


#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr1[] = {1,2,3,4,5};
    int arr2[] = {2,3,4,4,5};

    set<int> st;
    for(int i = 0; i < 5; i++){
        st.insert(arr1[i]);
        st.insert(arr2[i]);
    }

    for(int e : st){
        cout << e << " ";
    }

    return 0;
}
