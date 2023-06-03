#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

vector<int> ShortestPath(vector<int> adj[], int v, int s){
    vector<int> distance(v,INT_MAX);
    distance[s] = 0;
    queue<int> q;
    vector<bool> visited(v,false);

    q.push(s);
    visited[s] = true;

    while(!q.empty()){
        int x = q.front();
        q.pop();

        for(int e : adj[x]){
            if(!visited[e]){
                distance[e] = distance[x] + 1;
                q.push(e);
                visited[e] = true;
            }
        }
    }

    return distance;
}

int main() {
    int v = 4;
    vector<int> adj[v];

    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,2,3);

    int source = 0;

    vector<int> vec = ShortestPath(adj,v,source);
    for(auto e : vec){
        cout << e << " ";
    }

    return 0;
}
