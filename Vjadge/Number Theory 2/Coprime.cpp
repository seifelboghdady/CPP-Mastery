#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int last_idx[1001] = {0}; 

        for (int i = 1; i <= n; i++) {
            int val; cin >> val;
            last_idx[val] = i;
        }

        int max_sum = -1;
        for (int v1 = 1; v1 <= 1000; v1++) {
            if (last_idx[v1] == 0) continue; 
            for (int v2 = v1; v2 <= 1000; v2++) {
                if (last_idx[v2] > 0) {
                    if (__gcd(v1, v2) == 1) {
                        max_sum = max(max_sum, last_idx[v1] + last_idx[v2]);
                    }
                }
            }
        }
        cout << max_sum << "\n"; 
    }
    return 0;
}