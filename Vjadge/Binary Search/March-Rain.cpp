#include <bits/stdc++.h>
#define int long long
using namespace std;

bool can( vector<int> &hole,int l, int k){
    int current_hole = hole[0];
    int stripe = 1;
    for (int i = 0; i < hole.size(); i++)
    {
        if(hole[i]>=current_hole+l){
            stripe++;
            current_hole = hole[i];
        }
    }
    return stripe <= k ;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while (t--)
    {
        int n, k; cin>>n>>k;
        vector<int> x(n);
        for (int i = 0; i < n; i++) cin>>x[i];

        int l=0, r=1e9, mid, ans=1e9;
        while (l<= r)
        {
            mid = (l+r)/2;
            if(can(x,mid, k)){
                ans = mid;
                r= mid-1;
            }else{
                l = mid + 1;
            }
        }
        cout<<ans<<'\n';
    }
}