#include <bits/stdc++.h>
#define int long long
using namespace std;

int cntpow(int n){
    if(n<=0) return 0;
    return 64 - __builtin_clzll(n);
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while (t--)
    {
        int a, b;
        cin>>a>>b;

        int v = cntpow(b) - cntpow(a-1);
        cout<<v<<endl;
    }
    
}