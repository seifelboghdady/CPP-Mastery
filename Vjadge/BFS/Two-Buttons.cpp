#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin>>n>>m;
    
    const int N = 2e4;
    queue<int>q;
    vector<int> distance(N, oo);
    q.push(n);
    distance[n]=0;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        int v = 2*u;
        if(v<N && distance[v]==oo){
            distance[v]=distance[u]+1;
            q.push(v);
        }
        v = u-1;
        if(v>=0 && distance[v]==oo){
            distance[v]=distance[u]+1;
            q.push(v);
        }
    }
    cout<<distance[m];
}