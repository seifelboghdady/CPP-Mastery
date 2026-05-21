#include <bits/stdc++.h>
using namespace std;

void dfs(int u, vector<vector<int>> &adj, vector<bool> &visited){
    visited[u]=1;
    for (int v : adj[u])
    {
        if(visited[v]){
            continue;
        }
        dfs(v, adj, visited);
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin>>n>>m;
    vector<vector<int>> adj(n+1);
    vector<bool> visited(n+1);
    for (int i = 1; i < m; i++)
    {
        int x, y; cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    int ans=0;
    for (int i = 1; i < n; i++)
    {
        if(visited[i]){
            continue;
        }
        dfs(i , adj, visited);
        ans++;
    }
    cout<<ans;
}