#include <bits/stdc++.h>
using namespace std;
const int N = 1e4, mod = 1e9+7;
int dp[N][N];
int n, m;
vector<vector<char>> v;

int go(int i, int j){
    if(i== n-1 && j==m-1){
        return 1;
    }
    if(v[i][j] == '#')
        return 0;
    int & ret = dp[i][j];
    if(~ret) return ret;

    ret =0;
    if(i+1<n){
        ret = go(i+1, j);
        ret %=mod;
    }
    if(j+1<m){
        ret += go(i, j+1);
        ret %= mod;
    }
    return ret;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>m;
    v.assign(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>v[i][j];
        }
        
    }
    ::memset(dp, -1, sizeof dp);
    cout<<go(0,0);
    

}