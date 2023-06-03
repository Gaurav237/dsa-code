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

int BS_recursive(const int a[], int l, int h, int k){
    if(l > h){
        return -1;
    }
    int mid = (l+h)/2;
    if(a[mid] == k){
        return mid;
    }else if(k < a[mid]){
        return BS_recursive(a,l,mid - 1,k);
    }else{
        return BS_recursive(a,mid + 1, h,k);
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a[] = {1,2,4,5,6,8};
    int n = 6;
    int k = 5;

    cout << BS_recursive(a,0,n-1,k);

    return 0;
}