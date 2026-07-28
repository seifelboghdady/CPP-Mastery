#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> bos; 
const int oo = 1e9+7;
int dp[200005][2];

int func(int i, int turn){

    //baseCase
    if (i >= n) return 0;

    //dp
    int & ret = dp[i][turn]; 
    if(~ret) return ret;

    // ret =0;
    // turn ==> 0 (my firnd)
    int ch1 = oo, ch2 =oo;
    if(!turn){
        ch1 = bos[i]+func(i+1, 1);
        if(i+1< n)
            ch2 = bos[i] + bos[i+1] + func(i+2, 1);
            
        ret = min(ch1, ch2);
    }else{ //my turn ====> 1
        ch1 = 0 + func(i + 1, 0);
        if (i + 1 < n)
            ch2 = 0 + func(i + 2, 0);

        ret = min(ch1, ch2);
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
        bos.resize(n);
        for (int i = 0; i < n; i++)
        {
            cin>>bos[i];
        }
        ::memset(dp, -1, sizeof dp);
        cout<<func(0,0)<<"\n";

    }
    

}