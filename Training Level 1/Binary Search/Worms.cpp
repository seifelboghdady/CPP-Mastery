#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) 
    {
        cin>>a[i];
        //prefix
        if(i!=0){
            a[i]+=a[i-1];
        }
    }
    int m; cin>>m;
    for (int i = 0; i < m; i++)
    {
        int q; cin>>q;
        int l =0 , r= n-1, mid, ans=n-1;
        while (l<=r)
        {
            mid= (l+r)/2;
            if(a[mid]<q){
                l = mid+1;
            }else{
                ans = mid;
                r= mid-1;
            }
        }
        cout<<ans+1<<'\n';
    }
}