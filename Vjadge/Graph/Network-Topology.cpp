#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> vis;
vector<int> deg;

void DFS(int n){
    vis[n]=1;
    for(auto v : adj[n]){
        if(!vis[v]){
            DFS(v);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin>>n>>m;
    adj.assign(n+1, {});
    vis.assign(n+1, 0);
    deg.assign(n+1, 0);
    for (int i = 0; i < m; i++)
    {
        int x, y; cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        deg[x]++;
        deg[y]++;
    }
    DFS(1);
    int ctn_one=0, ctn_two=0, ctn_m=0;
    for (int i = 1; i <= n; i++)
    {
        if(deg[i]==1){
            ctn_one++;
        }
        if(deg[i]==2){
            ctn_two++;
        }
        if(deg[i]==n-1){
            ctn_m++;
        }
    }
    if(m==n-1 && ctn_one==2 && ctn_two==n-2){
        cout<<"bus topology";
    }else if(ctn_m == 1 && ctn_one == n - 1 && m == n - 1){
        cout<<"star topology";
    }else if(ctn_two == n && m == n){
        cout<<"ring topology";
    }
    else{
        cout<<"unknown topology";
    }
    
    
    

}