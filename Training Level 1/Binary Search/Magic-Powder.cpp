#include <bits/stdc++.h>
#define int long long
using namespace std;

bool check(vector<int> &ingre, vector<int> &has, int num_cooks, int magic){
    int need =0;
    for (int i = 0; i < ingre.size(); i++)
    {
        int require =0;
        require = num_cooks*ingre[i];
        if(require>has[i]){
            need += require-has[i];
        }
        if (need > magic) return false;
    }
    return need <= magic;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k; cin>>n>>k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin>>a[i];
    vector<int> b(n);
    for (int i = 0; i < n; i++) cin>>b[i];
    int l =0, r= 3e9, mid, ans;
    while (l<=r)
    {
        mid = (r+l)/2;
        if(check(a, b, mid, k)){
            ans = mid;
            l =mid+1;
        }else{
            r= mid-1;
        }
    }
    cout<<ans;
}