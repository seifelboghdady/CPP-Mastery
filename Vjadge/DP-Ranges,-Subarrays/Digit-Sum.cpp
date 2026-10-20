#include <bits/stdc++.h>
using namespace std;

int mod= 1e9+7;


string s;
int D;
int dp[10000][100][2];

int func(int idx, int sum, bool can){

    //baseCase ....
    if (idx == s.length())
    {
        return sum == 0;
    }
    
    if(~dp[idx][sum][can]){
        return dp[idx][sum][can];
    }

    int d = s[idx]- '0';
    int limit = can ? 9: d;

    int ans =0;
    for (int i = 0; i <= limit ; i++)
    {
        ans += func(idx+1 , (sum+i)% D,can || i<d );
        ans %= mod;
    }
    
    return dp[idx][sum][can] = ans;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    memset(dp, -1, sizeof dp);
    cin>>s>>D;

    cout<<(func(0, 0, 0) - 1 + mod) % mod;

}