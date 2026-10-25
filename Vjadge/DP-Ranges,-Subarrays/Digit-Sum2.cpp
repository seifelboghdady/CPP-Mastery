#include <bits/stdc++.h>
#define ll long long
using namespace std;


string L, R;
ll dp[2000][2][2][20];

ll func(int idx, bool low, bool hig, ){

    
    if (idx == L.length())
        return 1;


    if(~dp[idx][low][hig][last]){
        return dp[idx][low][hig][last];
    }

    int l = L[idx]-'0';
    int r = R[idx]-'0';

    int dl = low? 0: l;
    int dr = hig? 9: r;

    ll ans=0;
    for (int i = dl; i <= dr; i++)
    {
        
        if (st && last == i) continue;
        ans+= func(idx+1, (low|| i>dl) , (hig|| i<dr), i, (st||(i!=0)));
    }
    
    return dp[idx][low][hig][last]=ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>L>>R;
    while (L.length()<R.length())
    {
        L = "0"+ L;
    }
    memset(dp, -1, sizeof dp);
    cout<<func(0, 0, 0, 10,0);

}