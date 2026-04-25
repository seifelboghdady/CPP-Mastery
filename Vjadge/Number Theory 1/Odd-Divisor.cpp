#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        while(n%2==0) n/=2;

        if(n>1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    

}