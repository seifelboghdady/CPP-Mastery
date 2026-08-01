#include <bits/stdc++.h>
using namespace std;

bool bfs(int n, vector<vector<int>>&adj, vector<int> &col, queue<int>&q){
    int start = n;
    q.push(start);
    col[start]=0;
    // bool can = true;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for (auto v : adj[x])
        {
            if(col[v]==-1){
                col[v]= 1- col[x];
                q.push(v);
            }else if(col[v]==col[x]){
                // can = false;
                return false;
            }
        }
    }
    return true;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin>>n>>m;
    vector<vector<int>>adj(n+1);
    vector<int> col(n+1, -1);
    queue<int> q;

    for (int i = 0; i < m; i++)
    {
        int a,b; cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bool can = true;
    for (int i = 1; i <= n; i++)
    {
        if(col[i]== -1){
           can = bfs(i,adj,col, q);
        }
    }
    

    if(!can){
        cout<<"IMPOSSIBLE";
    }else{
        for (int i = 1; i <= n; i++)
        {
            cout<<col[i]+1<<" ";
        }
        
    }
}