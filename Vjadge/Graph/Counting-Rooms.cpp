#include <bits/stdc++.h>
using namespace std;

vector<string> adj;
vector<vector<bool>> vis;

void DFS(int i, int j){
    int n = adj.size();
    int m = adj[0].size();
    if(i < 0 || i >= n || j < 0 || j >= m){
        return;
    }
    if(!vis[i][j] && adj[i][j]=='.'){
        vis[i][j]=1;
        DFS(i+1, j);
        DFS(i-1, j);
        DFS(i, j+1);
        DFS(i, j-1);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m; cin>>n>>m;
    adj.assign(n, "");
    vis.assign(n, vector<bool>(m, 0));
    for (int i = 0; i < n; i++)
    {
        cin>>adj[i]; 
    }
    int ans =0;    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(!vis[i][j] && adj[i][j]=='.'){
                DFS(i,j);
                ans++;
            }
        }
    }
    cout<<ans;
}