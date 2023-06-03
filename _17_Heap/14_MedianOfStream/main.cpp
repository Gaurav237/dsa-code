#include <bits/stdc++.h>
using namespace std;

void Median(int arr[], int n){
    priority_queue<int> s;  // smaller half  // max heap
    priority_queue<int,vector<int>,greater<>> g;  // greater half  // min heap

    s.push(arr[0]);
    cout << s.top() << " ";
    for (int i = 1; i < n; ++i) {
        int x = arr[i];
        if(s.size() > g.size()){
            if(s.top() > x){
                g.push(s.top());
                s.pop();
                s.push(x);
            }else{
                g.push(x);
            }
            cout << (float)(s.top() + g.top())/2.0 << " ";
        }else{
            if(g.top() < x){
                s.push(g.top());
                g.pop();
                g.push(x);
            }else{
                s.push(x);
            }
            cout << s.top() << " ";
        }
    }
}


int main() {
    int arr[] = {12,15,10,5,8,7,16};
    int n = 7;

    Median(arr,n);

    return 0;
}
