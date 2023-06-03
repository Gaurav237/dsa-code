 #include <bits/stdc++.h>
using namespace std;

// naive solution
void stock_span_1(const int a[], int n){
    for(int i = 0; i < n; i++){
        int count = 1;
        for(int j = i - 1; j >= 0; j--){
            if(a[i] >= a[j]){
                count++;
            }else{
                break;
            }
        }
        cout << count << " ";
    }
}

// efficient solution
void stock_span(int arr[], int n){
    vector<int> res;
    // Create a stack and push index of first element to it
    stack<int> s;
    s.push(0);

    // Span value of first element is always 1
    res.push_back(1);

    // Calculate span values for rest of the elements
    for(int i = 1; i < n; i++){
        // Pop elements from stack while stack is not
        // empty and top of stack is smaller than
        // price[i]
        while(!s.empty() && arr[s.top()] <= arr[i]){
            s.pop();
        }
        
        // If stack becomes empty, then price[i](current element) is
        // greater than all elements on left of it,
        // i.e., price[0], price[1], ..price[i-1].

        // Else price[i] is greater than elements after
        // top of stack
        int span = (s.empty()) ? (i + 1) : (i - s.top());
        res.push_back(span);

        // push current element
        s.push(i);
    }

    for(int i = 0; i < res.size(); i++){
        cout << res[0] << " ";
    }
}

int main() {
    int a[] = {13,15,12,14,16,8,6,4,10,30};
    int n = 10;
//    int a[] = {10,20,30,40};
//    int n = 4;
//    int a[] = {40,30,20,10};
//    int n = 4;

    stock_span(a,n);

    return 0;
}
