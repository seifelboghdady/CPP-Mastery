#include <bits/stdc++.h>
#define int long long
using namespace std;


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;int C, K;
    cin>>n>>C>>K;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> dp(n + 1, 0);

    const int INF = 4e18;

    dp[n] = 0;

    int mn = INF;

    for (int i = n - 1; i >= 0; i--) {

        // j = i
        mn = min(mn, dp[i + 1] + a[i] * C);

        dp[i] = -a[i] * C + C + K + mn;
    }

    cout << dp[0] << '\n';

}