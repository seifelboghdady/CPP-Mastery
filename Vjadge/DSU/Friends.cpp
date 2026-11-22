#include <bits/stdc++.h>
using namespace std;

struct DSU {
    vector<int> parent;
    vector<int> sz;
    int cnt;
    int max=0;
    DSU(int n) {
        parent.resize(n);
        sz.assign(n, 1);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
        cnt = n;
    }

    int findLeader(int x) {
        if (parent[x] == x) {
            return x;
        }
        return parent[x] = findLeader(parent[x]); // Path compression
    }

    int unit(int a, int b) {
        a = findLeader(a);
        b = findLeader(b);

        if (a == b) {
            return 0;
        }

        if (sz[a] < sz[b]) {
            swap(a, b);
        }

        parent[b] = a;
        cnt --;
        sz[a] += sz[b];
        if(max<sz[a])
            max = sz[a];
        return 1;
    }
};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){
        int n, m; cin>>n>>m;
        DSU dsu(n);
        while(m--){
            int i,j; cin>>i>>j;
            dsu.unit(i-1,j-1);
        }
        cout<<dsu.max<<'\n';
    }

}