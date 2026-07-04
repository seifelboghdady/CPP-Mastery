#include <bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 998244353;
int modpow(int x, int n) {
    if (n == 0) return 1%mod;
    long long u = modpow(x,n/2);
    u = (u*u)%mod;
    if (n%2 == 1) u = (u*x)%mod;
    return u;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vector<int> arr(n+1);
    for(int i =1; i<=n; i++) cin>>arr[i];

    //loop for k
    int ans =0;
    for (int k = 0; k <= n-1; k++)
    {
        vector<bool>vis(n+1);
        int num =0;
        for (int i = 1; i <= n; i++)
        {
            int cur = arr[i];
            int can =1;
            while(!vis[cur]){
                vis[cur]=1;
                int nxt = cur + k;
                if(nxt>n){
                    can = 0;
                    break;
                }
                cur = arr[nxt];
                if(cur == arr[i] && can) num++;

            }
        }
        ans += modpow(2, num) - 1;
        if(ans >= mod) ans -= mod;
    }
    cout << ans << '\n';
}