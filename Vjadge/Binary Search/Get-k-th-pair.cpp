#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m,k; cin>>n>>m>>k;
    vector<int> a(n);
    vector<int> b(m);
    for(int i =0; i<n; i++) cin>>a[i];
    for(int i =0; i<m; i++)cin>>b[i];

    sort(b.begin(), b.end());
    auto can = [&](int x){
        int pairs = 0;
        for (int i = 0; i < n; i++)
        {
            pairs += upper_bound(b.begin(), b.end(), x- a[i])- b.begin();
        }
        return pairs;
    };

    int l=2, r= 2*1e9, mid, ans;
    while (l<=r)
    {
        mid = (l+r)/2;
        if(can(mid)>=k){
            ans = mid;
            r=mid-1;
        }else{
            l = mid + 1;
        }
    }
    cout<<ans;

}