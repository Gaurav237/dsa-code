#include <bits/stdc++.h>
using namespace std;

class LRUCache {
public:
    struct Node {
        int key;
        int val;
        Node* next;
        Node* prev;
        Node(int _key, int _val){
            key = _key;
            val = _val;
            next = prev = NULL;
        }
    };

    Node* head = new Node(-1, -1);
    Node* tail = new Node(-1, -1);

    // total size of cache
    int cap;  
    unordered_map<int, Node*> mp;
    
    LRUCache(int _cap){
        cap = _cap;
        head->next = tail;
        tail->prev = head;
    }

    void addNode(Node* newNode){
        Node* temp = head->next;
        newNode->next = temp;
        newNode->prev = head;
        head->next = newNode;
        temp->prev = newNode;
    }

    void deleteNode(Node* delNode){
        Node* dPrev = delNode->prev;
        Node* dNext = delNode->next;
        dPrev->next = dNext;
        dNext->prev = dPrev;
        delete delNode;
    }
    
    /* 
    get() => if key exists then return the val,
        and update this as recently used 
    */
    int get(int _key){
        if(mp.find(_key) != mp.end()){
            Node* resnode = mp[_key];
            int res = resnode->val;
            mp.erase(_key);
            deleteNode(resnode);
            addNode(resnode);
            mp[_key] = head->next;
            return res;
        }
        return -1;
    }

    /* 
    put() => if already present then update the value, and as recently used .
            if size == capacity, then remove the least recently used node, and then add the val after head node
    */
    void put(int _key, int _val){
        if(mp.find(_key) != mp.end()){
            Node* existingNode = mp[_key];
            mp.erase(_key);
            deleteNode(existingNode);
        }
        if(mp.size() == cap){
            mp.erase(tail->prev->key);
            deleteNode(tail->prev);
        }

        addNode(new Node(_key, _val));
        mp[_key] = head->next;
    }
};