#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin>>n>>m;
    adj.assign(n+1, {});
    for (int i = 1; i <= m; i++)
    {
        int x,y; cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int ans=0;
    for (int i = 1; i <= n; i++)
    {
        ans=0;
        for (auto node : adj[i])
        {
            ans++;
        }
        cout<<ans<<endl;
    }
    

}