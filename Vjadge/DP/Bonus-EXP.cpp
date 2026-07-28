#include <bits/stdc++.h>
#define int long long
using namespace std;

//{ 5
// 1 5 3 2 7}

//take 

//or leave
const int N = 2e5+3;
int n;
vector<int> a;
int dp[N][2];

int func(int i, int g){
    if(i>n){
        return 0;
    }

    //dp
    int & ret = dp[i][g];
    if(~ret) return ret;
    
    //leave ..
    ret = 0;
    ret = func(i+1, g);
    
    //take ..
    if(g==0)
        ret = max(ret, 2*a[i]+func(i+1, 1));
    else 
        ret = max(ret, a[i]+func(i+1, 0));
    
    //return..
    return ret;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n;
    a.resize(n+2);
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    ::memset(dp, -1, sizeof dp);
    cout<<func(1,1);
    

}