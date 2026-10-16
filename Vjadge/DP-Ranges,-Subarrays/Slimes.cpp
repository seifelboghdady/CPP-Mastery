#include <bits/stdc++.h>
#define int long long
using namespace std;

const int oo = 1e18;
int n;
vector<int> arr, pre;

int dp[400][400];

int func(int l, int r){

    //base case;
    if(l==r){
        return 0;
    }

    if(~dp[l][r])
        return dp[l][r];

    int ans = oo;
    int sum = pre[r]-(l?pre[l-1]:0);

    for (int k = l; k <=r-1 ; k++)
    {
        ans = min(ans,func(l,k)+func(k+1, r));
    }
    return dp[l][r]=ans + sum;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    ::memset(dp, -1, sizeof dp);
    cin>>n;
    arr.assign(n, 0);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }

    pre=arr;
    for (int i = 1; i < n; i++)
    {
        pre[i] += pre[i-1];
    }
    
    cout<<func(0, n-1)<<"\n";
    

}