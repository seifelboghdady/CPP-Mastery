#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;

void dfs(int n){
    if(visited[n]) return;
    visited[n]= true;
    for (auto u : adj[n])
    {
        dfs(u);
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m; cin>>n>>m;
    adj.assign(n+1,{});
    visited.assign(n+1, 0);
    for (int i = 0; i < m; i++)
    {
        int a,b; cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);   
    }
    dfs(1);
    
    for (int i = 1; i <= n; i++)
    {
        if(!visited[i]){
            cout<<"NO";
            return 0 ;
        }
    }
    if(m==n-1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
    
    

}