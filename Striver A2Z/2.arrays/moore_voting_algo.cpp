/* 
Find the Majority Element that occurs more than N/2 times
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // int nums[] = {4,4,2,4,3,4,4,3,2,4};
    // int n = 10;

    int nums[] = {7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    int n = 16;


    // start
    int count = 0;
    int element = 0;

    for(int x : nums){
        if(count == 0){
            element = x;
        }

        if(element == x){
            count++;
        }else{
            count--;
        }
    }

    cout << element << endl;
    // end

    return 0;
}
