#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e6; 

int dp[N];

int func(int n){
    if(n==0){
        return 0;
    }
    if(n<N){
        int & ret = dp[n];
        if(~ret) return ret;
        ret =0;
        ret = max(n, func(n/2)+func(n/3)+func(n/4));

        return ret;
    }
        
    
    
    return max(n, func(n/2)+func(n/3)+func(n/4));

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; 
    ::memset(dp, -1, sizeof dp);
    while(cin>>n){
        cout<<func(n)<<endl;
    }

}