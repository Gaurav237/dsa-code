// index of leftmost non repeating character

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef map<int,int> mii;
#define FOR(i,x,y) for(int i = x; i < y; i++)
#define F first
#define S second
#define PB push_back
#define EB emplace_back
#define PRES(c,x) ((c).find(x) != (c).end())
#define SORT(x) (sort((x).begin(),(x).end()))
#define SORTA(x) (sort((x),(x)+n))

// Naive
// O( n ^ 2 ) => Time
int left_non_rep_0(const string &st){
    unsigned int n = st.length();
    FOR(i,0,n){
        FOR(j,i+1,n){
            if(st[i] == st[j]){
//                cout << st[i] << endl;
                break;
            }else if(st[i] != st[j] && j == n-1){
                return i;
            }
        }
    }
    return -1;
}

// Efficient Approach
// Time : O(1 traversal) = O(n)
int left_non_rep_1(const string &st){
    const int CHAR = 256;
    vector<int> firstIndex(CHAR, -1);

    for(int i = 0; i < st.length(); i++){
        if(firstIndex[st[i]] == -1){
            firstIndex[st[i]] = i;  // if not discovered, then store the 1st index
        }else{
            firstIndex[st[i]] = -2;  // if already occurred, then store -2, indicates the character is occurred more than once
        }
    }

    // Time : O(constant time = 256)
    int res = INT_MAX;
    for(int i = 0; i < firstIndex.size(); i++){
        int x = firstIndex[i];
        if(x >= 0){
            res = min(res, x);
        }
    }

    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1 = "geeksforgeeks";
    string s2 = "abcabc";
    string s3 = "apple";

    cout << left_non_rep_1(s1) << "\n";

    return 0;
}