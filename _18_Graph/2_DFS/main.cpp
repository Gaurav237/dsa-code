// TIme => O ( V + E )

#include <bits/stdc++.h>
using namespace std;

// For Undirected Graph
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void recDFS(vector<int> adj[], int s, vector<bool> &visited){
    visited[s] = true;
    cout << s << " ";

    for(int u : adj[s]){
        if(visited[u] == false){
            recDFS(adj,u,visited);
        }
    }
}

void DFS(vector<int> adj[], int v, int s){
    vector<bool> visited(v,false);

//    for(int i = 0; i < v; i++){
//        if(visited[i] == false){
            recDFS(adj,s,visited);
//        }
//    }
}

int main() {
    int v = 4;
    vector<int> adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,2);
    addEdge(adj,1,3);

//    printGraph(adj,v);

    DFS(adj,v,0);

    return 0;
}
