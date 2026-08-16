#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> dict;

vector<int> comp;

void dfs(int n, int id){
    comp[n] = id;
    for (auto u : dict[n])
    {
        if(comp[u]==-1)
            dfs(u, id);
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q; cin>>n>>q;
    // vector<vector<int>> dict(n+26);
    dict.assign(n+26, {});
    for(int i =0; i<n; i++) {
        string st; cin>>st;
        for(char c: st){
            dict[i].push_back(n+(c-'a'));
            dict[n+(c-'a')].push_back(i);
        }
    }
    
    // for (int i = 0; i < n-1; i++)
    // {
    //     adj[i].push_back(i+1);
    // }
    
    // vis.assign(n+26, 0);
    comp.assign(n+26, -1);
    int id = 0;
    for (int i = 0; i < n+26; i++)
    {
        if(comp[i]==-1){
            dfs(i, id);
            id++;
        }
    }
    
    
    while (q--)
    {
        string a, b; cin>>a>>b;
        if(comp[n+(a[0]-'a')] == comp[n+(b[0]-'a')]){
            cout<<"LUA"<<'\n';
        }else{
            cout<<"RYEI"<<'\n';
        }
    
    }

}