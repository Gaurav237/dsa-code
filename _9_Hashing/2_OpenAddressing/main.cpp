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

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
