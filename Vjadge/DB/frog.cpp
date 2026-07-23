#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e5, oo = 1e18;
int s, dp[N], h[N];

// vector<int> dp(N), h(N);

int go(int n){

    if(n==s-1) return 0;

    if(~dp[n]) return dp[n];

    int ch1 = oo, ch2 =oo;
    //transtion
    if(n+1<s)
        ch1 = abs(h[n]-h[n+1]) + go(n+1);
    if(n+2<s)
        ch2 = abs(h[n]-h[n+2]) + go(n+2);

    return dp[n] = min(ch1, ch2);
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

     cin>>s;
    // h.assign(N, {});
    for (int i = 0; i < s; i++)
    {
        cin>>h[i];
    }
    ::memset(dp, -1, sizeof dp);

    cout<<go(0)<<endl;
    

}