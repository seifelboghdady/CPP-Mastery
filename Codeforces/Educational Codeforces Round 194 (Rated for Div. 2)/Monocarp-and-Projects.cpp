#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while (t--)
    {
        int x,y,k; cin>>x>>y>>k;
        int ans =0;
        for (int i = 0; i < k; i++)
        {
            if (x + i > y - x)
            {
                ans += (k - i) * (y - x);
                break;
            }

            ans += (y + i) % (x + i);
        }
        cout<<ans<<endl;
    }
    

}