#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> visited;
bool cycle =0;
//0 => not visited, 1 => visited and not stack, 2=>visited in stack
void DFS(int n){
    visited[n]=2;
    for (auto v : adj[n])
    {
        if(!visited[v]){
            DFS(v);
        }else if(visited[v]==2){
            cycle=1;
        }
    }
    visited[n]=1;
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
        // adj[y].push_back(x); remove this because Graph is Directed
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
    DFS(1);
    cout<<(cycle ? "YES" : "NO")<<endl;
}