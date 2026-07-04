#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> vis;


void dfs(int n){
    if(vis[n]) return;
    vis[n]=1;
    for(auto u : adj[n]){
        dfs(u);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int n,t; cin>>n>>t;
    vector<int> arr(n);
    for (int i = 1; i < n; i++)
    {
        cin>>arr[i];
    }

    adj.assign(n+1, {});
    vis.assign(n+1,0);
    for ( int i = 1; i < n; i++)
    {
        //adj[i].pushback(i+a[i])
        adj[i].push_back(i+arr[i]);
        // adj[i+arr[i]].push_back(i);
    }

    dfs(1);
    cout<<(vis[t]? "YES" : "NO")<<endl;
    // for (int i = 1; i <= t; i++)
    // {
    //     if(!vis[i]){
    //         cout<<"NO";
    //         return 0;
    //     }
    // }
    // cout<<"YES";
    // for (int i = 1; i < n; i++)
    // {
    //     cout<<i<<" : ";
    //     for(auto p :adj[i]){
    //         cout<<p<<" ";
    //     }
    //     cout<<endl;
    // }
    
    

}