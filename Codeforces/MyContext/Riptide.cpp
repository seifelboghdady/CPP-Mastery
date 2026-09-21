#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int steps = 0;

        while (a != b && a != c && b != c) {

            int mn = min({a, b, c});
            int mx = max({a, b, c});

            
            if (a == mn) a++;
            else if (b == mn) b++;
            else c++;

            if (a == mx) a--;
            else if (b == mx) b--;
            else c--;

            steps++;
        }

        cout << steps << '\n';
    }

    return 0;
}