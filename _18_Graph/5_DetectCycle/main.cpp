// Detect Cycle in an Undirected Graph

#include <bits/stdc++.h>
using namespace std;

// For Undirected Graph
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

bool recDFS(vector<int> adj[], int s, vector<bool> &visited, int parent){
    visited[s] = true;

    for(int e : adj[s]){
        if(visited[e] == false){
            if(recDFS(adj,e,visited,s)){
                return true;
            }
        }else if(visited[e] == true && e != parent){
            return true;
        }
    }
    return false;
}

// DFS Based Solution
bool detectCycle(vector<int> adj[], int v){
    vector<bool> visited(v,false);

    for(int i = 0; i < v; i++){
        if(!visited[i]){
            if(recDFS(adj,i,visited,-1)){
                return true;
            }
        }
    }
    return false;
}

int main() {
    int v = 4;
    vector<int> adj[v];
    addEdge(adj,0,1);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
//    addEdge(adj,2,3);

    cout << boolalpha << detectCycle(adj,v);

    return 0;
}
