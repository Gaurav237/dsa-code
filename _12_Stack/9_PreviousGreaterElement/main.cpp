#include <bits/stdc++.h>
#define ll long long
using namespace std;


// Time : O(n)
void prevGreater(vector<int> &arr){

    stack<int> st;
    st.push(arr[0]);

    cout << -1 << " ";

    for(int i = 1; i < arr.size(); i++){
        while(!st.empty() && st.top() < arr[i]){
            st.pop();
        }

        if(st.empty()){
            cout << -1 << " ";
        }else{
            cout << st.top() << " ";
        }

        st.push(arr[i]);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {15, 10, 18, 12, 4, 6, 2, 8};

    prevGreater(arr);

    return 0;
}
