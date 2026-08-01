#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> vis;

void dfs(int n){
    vis[n]=1;
    for (auto u : adj[n])
    {
        if(!vis[u])
            dfs(u);
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q; cin>>n>>q;
    vector<string> dict(n);
    for(int i =0; i<n; i++) cin>>dict[i];
    unordered_map<string,int> pos;
    for(int i=0;i<n;i++)
        pos[dict[i]]=i;

    adj.assign(n+1, {});
    vis.assign(n+1, 0);
    for (int i = 0; i < n-1; i++)
    {
        adj[i].push_back(i+1);
    }
    
    
    while (q--)
    {
        string a, b; cin>>a>>b;
        dfs(pos[a]);
        if(vis[pos[b]]){
            cout<<"LUA"<<'\n';
        }else{
            cout<<"RYEI"<<'\n';
        }
    
    }

}