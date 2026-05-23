#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> vis;

int DFS(int n ){
    vis[n]=1;
    int cnt=1;
    for (auto v : adj[n])
    {
        if(!vis[v]){
            cnt += DFS(v);
        }
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){
        int n, m; cin>>n>>m;
        adj.assign(n+1, {});
        vis.assign(n+1, 0);
        for (int i = 1; i <= m; i++)
        {
            int x, y; cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if(!vis[i]){
               ans=max(ans, DFS(i)); 
            }
        }
        cout<<ans<<endl;
        
    }

}