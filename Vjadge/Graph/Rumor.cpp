#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> vis;
vector<int> cost;

int mn;


void DFS(int n){
    if(!vis[n]){
        vis[n]=1;
        mn = min(mn, cost[n]);
        for (auto p : adj[n])
        {
            DFS(p);
        }
        
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m; cin>>n>>m;
    adj.assign(n+1, {});
    vis.assign(n+1, 0);
    cost.assign(n+1, {});
    for (int i = 1; i <= n; i++)
    {
        cin>>cost[i];
    }
    for (int i = 0; i < m; i++)
    {
        int x,y; cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    long long ans =0;
    for (int i = 1; i <= n; i++)
    {
        if(!vis[i]){
            mn = 1e9+7;
            DFS(i);
            ans+=mn;
        }
    }
    cout<<ans;
}