#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++) cin>>a[i];
    for (int i = 0; i < m; i++) cin>>b[i];
    int g=0;
    for (int i = 1; i < n; i++)
    {
        g = gcd(g,a[i]-a[0]);
    }

    for (int i = 0; i < m; i++)
    {
        cout<<gcd(g,a[0]+b[i])<<" ";
    }
}