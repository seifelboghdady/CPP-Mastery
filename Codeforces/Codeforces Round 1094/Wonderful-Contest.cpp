#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<pair<int,int>> v(n);

        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            v[i] = {100 / a, a}; // (value, count)
        }

        sort(v.begin(), v.end());

        int reach = 0;

        for (auto [val, cnt] : v) {
            if (val > reach + 1) {
                break;
            }
            reach += val * cnt;
        }

        if (reach >= 100 * n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}