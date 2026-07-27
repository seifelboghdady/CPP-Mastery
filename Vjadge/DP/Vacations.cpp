#include <bits/stdc++.h>
using namespace std;

int dp[101][3];
vector<int> val;
int n;

int func(int i,int last){
    if(i>= n) return 0;
    //dp
    int & ret = dp[i][last];
    if(~ret) return ret;
   
    // ret =oo;
    //if day =0 this is rest
    // if(val[i]==0) ret = 1+func(i+1);
    
   //last (0=>rest, 1=>gem, 2=>sport)

   //rest
    ret =0; 
    ret = 1+ func(i+1, 0);
    //choose one takes sport only
    if (last != 1 && (val[i] == 1 || val[i] == 3)) {
        ret = min(ret, func(i + 1, 1));
    }
    //choose two takes gem
    if (last != 2 && (val[i] == 2 || val[i] == 3)) {
        ret = min(ret, func(i + 1, 2));
    }

    return ret;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n;
    val.resize(n+1);
    for (int i = 0; i < n; i++)
    {
        cin>>val[i];
    }
    
    ::memset(dp, -1, sizeof dp);
    cout<<func(0, 0);

}