#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vector<int> a(n+1);
    vector<int> pre(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
        pre[i] = pre[i-1]+a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        int ans= 0;
        for (int j = 1; j+i-1 <=n ; j++)
        {
            int l = j+i-1;
            ans += pre[l]-pre[j-1];
        }
        cout<<ans<<" ";
    }
    

    
    
    
}