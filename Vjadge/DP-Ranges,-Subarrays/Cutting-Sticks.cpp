#include <bits/stdc++.h>
#define int long long
using namespace std;

const int oo = 1e18;
int len;
int n;
vector<int> arr;

int dp[400][400];

int func(int l, int r){
    
    //base case;
    if (r == l + 1)
        return 0;

    int sum = arr[r]-arr[l];
    
    if(~dp[l][r])
        return dp[l][r];

    int ans = oo;

    for (int k = l+1; k <=r-1 ; k++)
    {
        ans = min(ans,func(l,k)+func(k, r));
    }
    return dp[l][r]=ans + sum;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    
    while (cin >> len && len != 0)
    {
        memset(dp, -1, sizeof dp);
        
        cin>>n;

        arr.assign(n+2, 0);
        arr[n+1]=len;
        for (int i = 1; i <= n; i++)
        {
            /* code */
            cin>>arr[i];
        }
    
        cout << "The minimum cutting is " << func(0, n+1) << ".\n";
    }
    
    

}