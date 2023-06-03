#include <bits/stdc++.h>
using namespace std;

struct myHash{
    int BUCKET;
    list<int> *table;

    myHash(int b){
        BUCKET = b;
        table = new list<int>[b];
    }

    void insert(int key){
        int i = key % BUCKET;
        table[i].push_back(key);
    }

    void remove(int key) {
        int i = key % BUCKET;
        table[i].remove(key);
    }

    bool search(int key){
        int i = key % BUCKET;
        for(auto x : table[i]){
            if(x == key){
                return true;
            }
        }
        return false;
    }
};

int main() {


    return 0;
}
