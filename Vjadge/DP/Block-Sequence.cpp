#include <bits/stdc++.h>
using namespace std;

int n; vector<int> nums;

const int N = 1e4, A= 10000, oo = 1e9;
int dp[N][A];

int func(int i, int rem){

    if(i==n){
        if(rem == 0) return 0;
        return oo;
    }
    //dp
    int & ret = dp[i][rem];
    if(~ret) return ret;

    //transtion
    //delete a[i]
    ret =oo;
    
    if(rem>0){
        ret = 1+ func(i+1, rem);
        
        ret= min(ret, func(i+1, rem-1));
    }else{
        ret = min(ret, 1 + func(i + 1, 0));

        ret = min(ret, func(i + 1, nums[i]));
    }

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
        cout<<func(0,0)<<endl;
    }
    
}