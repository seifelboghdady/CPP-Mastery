#include <bits/stdc++.h>
#define int long long
using namespace std;

bool can(vector<int> &k, int sec, int product){
    int ctn=0;
    for (int i = 0; i < size(k); i++)
    {
        ctn += sec/k[i];
        if (ctn >= product) return true;
    }
    return ctn>=product;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n , t; cin>>n>>t;
    vector<int> k(n);
    for (int i = 0; i < n; i++) cin>> k[i];
    int l=0, r=1e18, mid, ans;
    while(l<=r){
        mid = (l+r)/2;
        if(can(k, mid, t)){
            ans = mid;
            r = mid -1;
        }else{
            l = mid+1;
        }
    }
    cout<<ans;
}
