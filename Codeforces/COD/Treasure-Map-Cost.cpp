#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool>visited;

void dfs(int s){
    if (visited[s]) return;
    visited[s] = true;
    // process node s
    for (auto u: adj[s]) {
        dfs(u);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while (t--)
    {
        int n,k; cin>>n>>k;
        adj.assign(n+1, {});
        visited.assign(n+1, 0);
        for (int i = 0; i < n; i++)
        {
            int u,v; cin>>u>>v;
        }
        
    }
    

}