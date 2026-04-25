#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while (t--)
    {
        int a, b; cin>>a>>b;
        if(a%b!=0){
            int ans = b-(a%b);
            cout<<ans<<endl;
        }else{
            cout<<0<<endl;
        }
    }
    
}