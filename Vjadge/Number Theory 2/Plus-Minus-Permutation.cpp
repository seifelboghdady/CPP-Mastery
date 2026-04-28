#include <bits/stdc++.h>
#define int long long
using namespace std;

int sum(int l, int r){
    if(l > r) return 0;
    return r*(r+1)/2 - l*(l-1)/2;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while (t--)
    {
        int n, x, y; cin>>n>>x>>y;

        int divX = n/x;
        int divY = n/y;
        int common = n/lcm(x, y);
        divX -= common;
        divY -= common;

        int ans = sum(n-divX+1, n);
        ans -= sum(1, divY);
        cout<<ans<<endl;
    }
}