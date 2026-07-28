#include <bits/stdc++.h>
using namespace std;

int n; vector<int> nums;

const int N = 2e5;
int dp[N];

int func(int i){

    if(i>=n){
        
        return 0;
    }
    //dp
    int & ret = dp[i];
    if(~ret) return ret;

    
    ret =0;
    
    // leave
    ret = func(i+1);

    //take with condition 
    if(nums[i]+i < n)
        ret = max(ret, func(nums[i]+i+1)+ nums[i] + 1);
    
    return ret;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while (t--)
    {
        cin>>n;
        nums.resize(n);
        for (int i = 0; i < n; i++)
        {
            cin>>nums[i];
        }
        ::memset(dp, -1, sizeof dp);
        cout<<n-func(0)<<endl;
    }
    
}