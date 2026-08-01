#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, s; cin>>n>>s;
    cout << n / gcd(n, s);

}