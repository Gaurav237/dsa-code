#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef map<int,int> mii;
#define FOR(i,x,y) for(int (i) = (x); (i) < (y); (i)++)
#define F first
#define S second
#define PB push_back
#define EB emplace_back
#define PRES(c,x) ((c).find(x) != (c).end())
#define SORT(x) (sort((x).begin(),(x).end()))
#define SORTA(x) (sort((x),(x)+n))


// better solution
// O( 2 * n ) => Time
int left_rep_occ(const string &st){
    int count[256] = {0};  // assuming ascii characters
    FOR(i,0,st.length()){
        count[st[i]]++;
    }
    FOR(i,0,st.length()){
        if(count[st[i]] > 1){
            return i;
        }
    }
    return -1;
}

// efficient solution
// O( n ) => Time
int left_rep_occ_1(const string &st){
    int count[256] = {0};
    FOR(i,0,st.length()){
        count[st[i]]++;
        if(count[st[i]] > 1){

        }
    }

}




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1 = "geeksforgeeks";
    string s2 = "abbcc";
    string s3 = "abcd";

    cout << left_rep_occ(s3);

    return 0;
}