#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int &i : a) cin >> i;

    set<int> s;
    for (int i = 0; i < m; i++) {
        int x; cin >> x;
        s.insert(x);
    }

    int k = s.size();

    sort(a.rbegin(), a.rend());

    int ans = 0;
    for (int i = k; i < n; i++) {
        ans += a[i];
    }

    cout << ans << '\n';
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}