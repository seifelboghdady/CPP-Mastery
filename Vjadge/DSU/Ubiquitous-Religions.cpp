#include <bits/stdc++.h>
using namespace std;

struct DSU {
    vector<int> parent;
    vector<int> sz;
    int cnt;
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
        return 1;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, caseN=1; 
    while(cin >> n >> m && (n || m)){

        DSU dsu(n+1);
        for(int x=0; x<m; x++){
            int i, j; cin>>i>>j;
            dsu.unit(i, j);
        }
        cout << "Case " << caseN++ << ": "<<(dsu.cnt)-1<<'\n';
    }

}