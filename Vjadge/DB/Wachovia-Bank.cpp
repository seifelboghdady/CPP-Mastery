#include <bits/stdc++.h>
using namespace std;

int dp[55][1005];
vector<int> w,v; 

int m, k;
int func(int i, int rem){

    //basecase
    if(i==m){
        return 0;
    }


    int & ret = dp[i][rem];
    if(~ret) return ret;


    //leave
    ret = func(i+1, rem);
    //take
    if(rem>=w[i])
        ret = max(ret, v[i]+func(i+1, rem - w[i]));

    return ret;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while (t--)
    {
        cin>>k>>m;
        w.assign(m,{});
        v.assign(m, {});
        for (int i = 0; i < m; i++)
        {
           cin>>w[i]>>v[i];
        }
        ::memset(dp, -1, sizeof dp);
        cout<<"Hey stupid robber, you can get "<<func(0,k)<<".\n";
        
    }
    

}