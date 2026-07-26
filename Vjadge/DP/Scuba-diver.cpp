#include <bits/stdc++.h>
using namespace std;

vector<int> t, a, w;

//......//
int n;
const int oo = 1e9+7;
int dp[1000][22][80];

int func(int idx, int remo, int remn){
    //basecase
    if(idx == n){
        if(remo == 0 && remn == 0)
            return 0;
        return oo;
    }   


    //transtion 
    //minimize wigth of cy.. 
    int & ret = dp[idx][remo][remn];
    if(~ret) return ret;

    //leave
    
    int ch1= func(idx+1, remo, remn);
    
    //take
    // if(remo>=t[idx] && remn>= a[idx])
    int ch2= w[idx]+func(idx+1, max(0, remo - t[idx]), max(0, remn - a[idx]));
    return ret = min(ch1, ch2);
}




int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int c; cin>>c;
    while (c--)
    {
        int T, A; cin>>T>>A;
         cin>>n;
        t.resize(n);
        a.resize(n);
        w.resize(n);
        for (int i = 0; i < n; i++)
        {
            cin>>t[i]>>a[i]>>w[i];
        }
        ::memset(dp, -1, sizeof dp);
        cout<<func(0,T,A)<<endl;
    }
    
    

}