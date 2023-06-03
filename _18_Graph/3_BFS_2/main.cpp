/*
 For Traversing Undirected Disconnected Graph with no source given.
 */

#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void BFS(vector<int> adj[], int s, vector<bool> &visited){
    queue<int> q;
    q.push(s);
    visited[s] = true;

    while(!q.empty()){
        int x = q.front();
        q.pop();
        cout << x << " ";

        for(int e : adj[x]){
            if(!visited[e]){
                visited[e] = true;
                q.push(e);
            }
        }
    }
}

void disconnected_BFS(vector<int> adj[], int v){
    vector<bool> visited(v, false);

    for(int i = 0; i < v; i++){
        if(!visited[i]){
            BFS(adj,i,visited);
        }
    }
}

int main() {
    int v = 7;
    vector<int> adj[v + 1];

    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,3);
    addEdge(adj,2,3);

    addEdge(adj,4,5);
    addEdge(adj,4,6);
    addEdge(adj,5,6);

    disconnected_BFS(adj,v);

    return 0;
}
