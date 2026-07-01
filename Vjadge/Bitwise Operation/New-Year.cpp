#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v;
    for (int len =2; len <= 60; len++)
    {
        int mask = (1LL<<len)-1;
        for (int pos = 0; pos < len-1; pos++)
        {
            int cur = mask;
            cur ^= (1LL<<pos);

            v.push_back(cur);
        }
        
    }
    sort(v.begin(), v.end());
    
    int l,r; cin>>l>>r;
    int ans = 0;

    for (auto x : v)
    {
        if (l <= x && x <= r)
            ans++;
    }

    cout << ans;


}