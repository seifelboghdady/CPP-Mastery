#include <bits/stdc++.h>
using namespace std;

vector<bool> vis;
vector<vector<int>>adj;
map<int,int> f;
vector<int> ans, col;
void dfs(int u, int p) {
    // 1. تسجيل الدخول
    f[col[u]]++;
    ans[u] = f.size();

    // 2. التحرك للأبناء + التنظيف عند العودة
    for(auto &v : adj[u]) {
        if(v == p) continue;
        dfs(v, u);
        
    }
    // التراجع (Backtracking)
    f[col[u]]--;
    if(f[col[u]] == 0) f.erase(col[u]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q; cin>>n>>q;
    adj.assign(n+1,{});
    col.assign(n+1, {});
    ans.assign(n+1, {});
    for (int i = 1; i <= n; i++)
    {
        cin>>col[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        int a,b; cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1,1);
    while (q--)
    {
        int x; cin>>x;
        cout<<ans[x]<<'\n';
    }
}