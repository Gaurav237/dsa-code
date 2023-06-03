/*
 ### Greedy Algorithm ###
 *** General Structure ***
 * getOptimal(Item arr[], int n){
 *
 * 1) initialize : res = 0;
 * 2) while(all items are not considered){
 *      i = select_an_item();
 *
 *      if(feasible(i)){
 *          res += i
 *      }
 *
 * 3)   return res;
 *
 *   }
 */

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

//int min_coins(int a[], int n, int amount){
//    sort(a,a+n,greater<>());
//
//    int coins = 0;
//    int i = 0;
//    while(amount >= 0 && i < n){
//        if( a[i] <= amount ){
//            amount -= a[i];
//            coins++;
//        }else{
//            i++;
//        }
//    }
//    return coins;
//}

int min_coins(int a[], int n, int amount){
    sort(a,a+n,greater<>());

    int coins = 0;
    int i = 0;
    while(amount >= 0 && i < n){
        if( a[i] <= amount ){
            int num = floor(amount/a[i]);
            coins = coins + num;
            amount = amount - (num * a[i]);
        }
        i++;
    }
    return coins;
}

int main() {
    int a[] = {5,10,1,2};
    int n = 4;
    int amount = 59;

    cout << min_coins(a,n,amount);

    return 0;
}
