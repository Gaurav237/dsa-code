#include <bits/stdc++.h>
using namespace std;

struct myHash{
    int *arr;
    int cap;
    int size;

    myHash(int c){
        cap = c;
        size = 0;
        arr = new int[c];
        for(int i= 0 ;i < cap; i++){
            arr[i] = -1;
        }
    }

    int hash(int key){
        return key % cap;
    }

    bool search(int key){
        int h = hash(key);
        int x = h;
        while(arr[x] != -1){
            if(arr[x] == key){
                return true;
            }
            x = (x+1) % cap;

            if(x == h){
                return false;
            }
        }
        return false;
    }

    bool insert(int key){
        if(size == cap){
            return false;
        }
        int x = hash(key);
        // note : -2 indicates deleted place
        // search should not stop at deleted position.
        while(arr[x] != -1 && arr[x] != -2 && arr[x] != key){
            x = (x + 1) % cap;
        }
        if(arr[x] == key){
            return false;
        }else{
            arr[x] = key;
            size++;
            return true;
        }
    }

    bool erase(int key){
        int h = hash(key);
        int x = h;
        while(arr[x] != -1){
            if(arr[x] == key){
                arr[x]= -2;
                return true;
            }
            x = (x+1) % cap;

            if(x == h){
                return false;
            }
        }
        return false;
    }
};

// Naive Solution
// Time => O( n ^ 2 )
// Auxiliary Space => O( 1 )
int count_distinct_1(int arr[], int n){
    int res = 0;
    for(int i = 0; i < n; i++){
        bool flag = false;
        for(int j = 0 ; j < i; j++){
            if(arr[i] == arr[j]){
                flag = true;
                break;
            }
        }
        if(flag == false){
            res++;
        }
    }
    return res;
}

// efficient solution
// time => Theta(n)
// Aux => O(n)
int count_distinct_2(int arr[], int n){
    unordered_set<int> us;
    for(int i = 0; i < n; i++){
        us.insert(arr[i]);
    }
    return us.size();
}

// improved efficient solution
int count_distinct_3(int arr[], int n){
    unordered_set<int> us(arr,arr + n);  // constructor
    return us.size();
}

int main() {
//    int arr[] = {15,12,13,12,13,13,18};
//    int n = 7;

//    int arr[] = {10,10,10};
//    int n = 3;

    int arr[] = {10,11,12};
    int n = 3;


    cout << count_distinct_3(arr,n);

    return 0;
}
