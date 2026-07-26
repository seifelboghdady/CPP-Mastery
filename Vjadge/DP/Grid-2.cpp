#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1000, mod = 1e9+7;
int dp[N][N];
int n;
vector<vector<char>> v;

int go(int i, int j){
    if(v[i][j] == '*')
        return 0;

    if(i== n-1 && j==n-1){
        return 1;
    }
    int & ret = dp[i][j];
    if(~ret) return ret;

    ret =0;
    if(i+1<n){
        ret = go(i+1, j);
        ret %=mod;
    }
    if(j+1<n){
        ret += go(i, j+1);
        ret %= mod;
    }
    return ret;
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n;
    v.assign(n, vector<char>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>v[i][j];
        }
        
    }
    ::memset(dp, -1, sizeof dp);
    cout<<go(0,0);
    

}