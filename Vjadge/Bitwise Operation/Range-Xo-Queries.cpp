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
    while(q--)
    {
        int l,r; cin>>l>>r;
        int ans =0;
        l--; r--;
        for (int i = l; i <= r; i++)
        {
            ans^=a[i];
        }
        cout<<ans<<endl;
    }
    
}