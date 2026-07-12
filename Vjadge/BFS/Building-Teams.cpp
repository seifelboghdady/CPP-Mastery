#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin>>n>>m;
    vector<vector<int>>adj(n+1);
    vector<int> col(n, -1);
    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        int a,b; cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    int start = 1;
    q.push(start);
    col[start]=0;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        
    }
}