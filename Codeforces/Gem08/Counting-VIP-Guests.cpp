#include <bits/stdc++.h>
#define int long long
using namespace std;



signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while (t--)
    {
        int a, b;
        cin>>a>>b;

        cout<<__lg(b) - __lg(a-1)<<endl;
    }
    
}