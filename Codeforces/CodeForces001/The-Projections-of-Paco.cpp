#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while (t--)
    {
        /* code */
        int n; cin>>n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        //=============================//
        long long x =0;
        for (int i = n - 1; i >= 0; i--) {
            x = 2LL * a[i] - x;
        }
        
        cout<<x/2<<'\n';
    }

}