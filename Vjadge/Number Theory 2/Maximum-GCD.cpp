#include <bits/stdc++.h>
#define int long long
using namespace std;

int gcd_optimal(int a, int b){
    if(a>b) swap(a,b);
    while(a){
        b %=a;
        swap(a,b);
    }
    return b;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i+1; j <=n ; j++)
            {
                ans = max(gcd_optimal(i,j), ans);
            }
        }
        cout<<ans<<endl;
    }
}