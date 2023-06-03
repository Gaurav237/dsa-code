#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> nextGreater(vector<int> &arr){
    int n = arr.size();
    vector<int> res(n);

    stack<int> st;
    st.push(arr[n-1]);

    res[n-1] = -1;

    for(int i = n-2; i >= 0; i--){
        while(!st.empty() && st.top() < arr[i]){
            st.pop();
        }

        res[i] = (st.empty()) ? -1 : st.top();

        st.push(arr[i]);
    }

    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {5, 15, 10, 8, 6, 12, 9, 18};
    // output :        15,18, 12, 12,12,18,18, -1

    vector<int> v = nextGreater(arr);
    for(int e : v){
        cout << e << " ";
    }

    return 0;
}
