#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while (t--)
    {
        int a, b, c; cin>>a>>b>>c;
        int sum = a + b+ c;
        int mx = max({a,b,c});
        int sum2mn = sum - mx;
        if(sum2mn < mx){
            cout<<sum2mn - min({a,b,c})<<"\n";
        }else{
            cout<<mx - min({a,b,c})<<"\n";
        }
    }
    
}