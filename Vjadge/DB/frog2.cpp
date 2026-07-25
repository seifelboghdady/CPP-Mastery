#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5, oo=1e9+7; 
vector<int>h;

int dp[N], s;

int go(int n, int k){
    //basecase
    if(n==s-1) return 0;

    if(~dp[n]) return dp[n];

    //transtion

    int ans=oo;
    for (int i = 1; i <= k; i++)
    {
        if(i+n<s){
            ans = min(ans, abs(h[n]-h[n+i])+go(n+i, k));
        }
    }
    
    //return
    return dp[n] = ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int k; cin>>s>>k;
    h.assign(s, {});
    
    for (int i = 0; i < s; i++)
    {
        cin>>h[i];
    }
    ::memset(dp, -1, sizeof dp);
    cout<<go(0, k)<<endl;

}