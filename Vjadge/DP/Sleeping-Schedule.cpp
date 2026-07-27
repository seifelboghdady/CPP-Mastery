#include <bits/stdc++.h>
using namespace std;

const int N = 2005;

int n,h,l,r;
int dp[N][N];
int prefix[N];
vector<int>a;

int func(int i,int minus){

    if(i==n)
        return 0;

    int &ret=dp[i][minus];
    if(ret!=-1)
        return ret;

    ret=0;

    
    int t=(prefix[i+1]-minus)%h;
    if(t<0) t+=h;

    ret=(l<=t && t<=r)+func(i+1,minus);

    
    t=(prefix[i+1]-minus-1)%h;
    if(t<0) t+=h;

    ret=max(ret,(l<=t && t<=r)+func(i+1,minus+1));

    return ret;
}

int main(){

    cin>>n>>h>>l>>r;

    a.resize(n+1);

    for(int i=1;i<=n;i++){
        cin>>a[i];
        prefix[i]=prefix[i-1]+a[i];
    }

    memset(dp,-1,sizeof(dp));
    cout<<func(0,0);
}