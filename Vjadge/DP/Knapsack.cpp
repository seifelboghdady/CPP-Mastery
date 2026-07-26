#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e5+5;
int dp[100][N];
vector<int> wei, v;
int n;

int func(int i, int rem){

    //baseCase
    if(i>=n) return 0;

    //dp
    int & ret = dp[i][rem];
    if(~ret) return ret;


    ret =0;
    //leave;
    ret = func(i+1, rem);
    //take
    if(rem >= wei[i]){
        ret = max(ret, v[i]+ func(i+1, rem - wei[i]));
    }
    return ret;

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int w; cin>>n>>w;
    wei.resize(n);
    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin>>wei[i]>>v[i];
    }
    ::memset(dp, -1, sizeof dp);
    cout<<func(0, w);
    

}