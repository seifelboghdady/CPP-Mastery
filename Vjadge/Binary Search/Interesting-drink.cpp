#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    vector <int> x(n);
    for (int i = 0; i < n; i++) cin>>x[i];
    int q; cin>>q;
    sort(x.begin(), x.end());
    for (int i = 0; i < q; i++)
    {
        int m; cin>>m;
        auto it = upper_bound(x.begin(), x.end(), m);
        int idx = it - x.begin();
        cout<<idx<<'\n'; 
    }
}