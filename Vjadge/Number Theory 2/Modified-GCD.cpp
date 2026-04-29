#include <bits/stdc++.h>
#define int long long
using namespace std;

/* Primility Check - prime factorization - divisors O(sqrt(N)) */
 
vector<int> getDivisors(int n){
    vector<int> divs;
    for(int d = 1; d * d <= n; ++d){
        if(n % d == 0) {
            divs.push_back(d);
            if(d != n / d) divs.push_back(n / d);
        }
    }
    return divs;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b; cin>>a>>b;
    vector<int> divs = getDivisors(gcd(a,b));
    int t; cin>>t;
    while (t--)
    {
        int l, r; cin>>l>>r;
        int ans = -1;
        for (auto x: divs){
            if(x>=l && x<=r){
                ans = max(ans, x);
            }
        }
        cout<<ans<<endl;
    }
}