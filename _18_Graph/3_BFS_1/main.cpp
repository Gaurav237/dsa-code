/*
  For Traversing Undirected Connected Graph.
*/

#include <bits/stdc++.h>
using namespace std;

// For Undirected Graph
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void BFS(vector<int> adj[], int v, int s){
    vector<bool> visited(v,false);
    queue<int> q;
    q.push(s);
    visited[s] = true;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        cout << x << " ";

        // for adding neighbours of the current node (u)
        for(int e : adj[x]){
            if(!visited[e]){
                visited[e] = true;
                q.push(e);
            }
        }
    }
}
 
int main() {
    int v = 4;
    vector<int> adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,2);
    addEdge(adj,1,3);

    BFS(adj,v,0);

    return 0;
}
