#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
bool cycle = 0;

void DFS(int n){
    visited[n]=1;
    for (auto v : adj[n])
    {
        if(!visited[v]){
            DFS(v);
        }
    }
    
}

void DFS(int n, int p){
    visited[n]=1;
    for (auto v : adj[n])
    {
        if(v==p){
            continue;
        }

        if(!visited[v]){
            DFS(v, n);
        }else{
            cycle = 1;
        }
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin>>n>>m;
    adj.assign(n+1,{});
    visited.assign(n+1, 0);

    for (int i = 1; i <= m; i++)
    {
        int x, y; cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    // int ans=0;
    // for (int i = 1; i <= n; i++)
    // {
    //     if(!visited[i]){
    //         ans++;
    //         DFS(i);
    //     }
    // }
    // cout<<ans;
    // cout<<(ans == 1 && m == n-1 ? "YES" : "NO")<<endl;
    // cout<<( m == n-ans ? "YES" : "NO")<<endl;

    DFS(1,0);
    cout<<(!cycle ? "YES" : "NO")<<endl;
}