#include <bits/stdc++.h>
#define weight first
#define value second
typedef pair<double, double> pdd;
using namespace std;

bool myCmp(pdd a, pdd b){
    double r1 = a.value / a.weight;
    double r2 = b.value / b.weight;

    return (r1 > r2);
}

double solve(pdd pa[], int n, double weight_capacity){
    // sort according to ratio
    sort(pa, pa + n, myCmp);

    // initialize 
    double total = 0;
    double wt_left = weight_capacity;

    // for every item i in sorted order
    for(int i = 0; i < n; i++){
        pdd curr = pa[i];

        if(curr.weight <= wt_left){
            total += curr.value;
            wt_left -= curr.weight;
        }else{
            total += (wt_left) * (curr.value / curr.weight);
            break;
        }
    }

    return total;
}

int main() {
    // < weight , value >
   pdd parr[] = {{50,600},{20,500},{30,400}};
   int n = 3;
   double cap = 70;
    // pair<double,double> parr[] = {{30,120},{20,100},{10,60}};
    // int n = 3;

    for(int i = 0; i < n; i++){
        cout << parr[i].first << " : " << parr[i].second << endl;
    }
    // cout << solve(parr, n, cap) << endl;

    return 0;
}
