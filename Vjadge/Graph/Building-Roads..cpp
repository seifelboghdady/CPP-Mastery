#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> vis;

void DFS(int n){
    if(!vis[n]){
        vis[n]=1;
        for (auto city : adj[n])
        {
            DFS(city);
        }
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m; cin>>n>>m;
    adj.assign(n+1, {});
    vis.assign(n+1, 0);
    for (int i = 0; i < m; i++)
    {
        int a,b; cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<int> repos;
    for (int i = 1; i <= n; i++)
    {
        if(!vis[i]){
            repos.push_back(i);
            DFS(i);
        }
    }
    
    cout<<repos.size()-1<<endl;
    for(int i=1; i<repos.size(); i++){
        cout<<repos[i-1]<<' '<<repos[i]<<endl;
    }

}