#include <bits/stdc++.h>
#define ll long long
using namespace std;


string L, R;
int dp[1001][2][2][4];

ll func(int idx, bool low, bool hig, int rem){

    if (rem < 0)
        return 0;

    if (idx == L.length())
        return 1;


    if(~dp[idx][low][hig][rem]){
        return dp[idx][low][hig][rem];
    }

    int l = L[idx]-'0';
    int r = R[idx]-'0';

    int dl = low? 0: l;
    int dr = hig? 9: r;

    int ans=0;
    for (int i = dl; i <= dr; i++)
    {
        ans+= func(idx+1, low|| i>dl , hig|| i<dr , rem - (i != 0));
    }
    
    return dp[idx][low][hig][rem]=ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int t;  cin>>t;
    while (t--)
    {
        cin>>L>>R;

        while (L.length()<R.length())
        {
            L = "0"+ L;
        }
        

        memset(dp, -1, sizeof dp);

        cout<<func(0,0,0,3)<<"\n";
    }
    

}