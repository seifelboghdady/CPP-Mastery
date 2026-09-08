#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int qrTNum;
    cin >> qrTNum;

    while (qrTNum--) {
        long long x, y;
        cin >> x >> y;

        long long sum = x + y;
        long long a = 0;

        for (int bit = 30; bit >= 0; bit--) {
            long long candidate = a | (1LL << bit);

            if (candidate <= x) {
                long long b = sum - candidate;

                if ((candidate & b) == 0)
                    a = candidate;
            }
        }

        long long b = sum - a;

        if ((a & b) == 0)
            cout << sum << ' ' << x - a << '\n';
        else
            cout << 0 << ' ' << 0 << '\n';
    }

    return 0;
}