#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q; cin>>n>>q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    vector<int> pref(n+1);
    pref[0]=0;
    for (int i = 1; i <= n; i++)
    {
        pref[i] = a[i-1]^pref[i-1];
    }
    
    while(q--)
    {
        int l,r; cin>>l>>r;
        int ans = pref[r]^pref[l-1];
        cout<<ans<<endl;
    }
    
}