#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>adj;
int oo = 1e9;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m; cin>>n>>m;
    adj.assign(n+1, {});
    for (int i = 0; i < m; i++)
    {
        int u, v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    queue<int> q;
    vector<bool> visited(n+1,0);
    vector<int> parent(n+1, -1), distance(n+1,oo);

    int src =n;
    visited[src]=1;
    distance[src] = 0;
    q.push(src);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for (auto v : adj[u])
        {
        
            if(visited[v]) continue;
            visited[v]=1;
            distance[v] = distance[u]+1;
            parent[v]=u;
            q.push(v);
        }
    }

    if(distance[1]==oo){
        cout<<"IMPOSSIBLE";
        return 0;
    }
    cout<<distance[1]+1<<endl;
    int u =1;
    while(u != -1){
        cout<<u<<" ";
        u=parent[u];
    }
}