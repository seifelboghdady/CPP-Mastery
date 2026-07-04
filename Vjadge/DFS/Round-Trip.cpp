#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> vis;
bool cycle =0;

void DFS(int n, int p){
    vis[n]=1;
    cout<<n<<endl;
    for (auto v : adj[n])
    {
        if(v==p){
            continue;
        }

        if(!vis[v]){
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
    adj.assign(n+1, {});
    vis.assign(n+1, 0);
    for (int i = 0; i < m; i++)
    {
        int a,b; cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    DFS(1,0);
}