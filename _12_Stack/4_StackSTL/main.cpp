#include <iostream>
#include <stack>
using namespace std;

/*
 * Time Complexity *
 * 1) push() => O(1)
 * 2) pop() => O(1)
 * 3) top() => O(1)
 * 4) size() => O(1)
 * 5) empty() => O(1)
 */

int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    // cout << s.size() << endl;
    // cout << s.top() << endl;
    // s.pop();
    // cout << s.top() << endl;

    // cout << "**********************" << endl;
    // while(!s.empty()){
    //     cout << s.top() << " ";
    //     s.pop();
    // }


    return 0;
}
