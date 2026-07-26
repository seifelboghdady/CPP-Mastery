#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;
vector<int> monster;
const int N = 1e4;
int dp[N];

int func(int i){

    //base Case
    if(i>=n) return 0;
    int & ret = dp[i];
    if(~ret) return ret;

    ret =0;
    // Transtion ====>> Two choices
    
    int ch1 = func(i+1);
    int ch2 = monster[i]+func(i+2);

    ret = max(ch1, ch2);
    return ret;
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    int c=1;
    while (t--)
    {
        cin>>n;
        monster.resize(n);
        for (int i = 0; i < n; i++)
        {
            cin>>monster[i];
        }
        ::memset(dp, -1, sizeof dp);
        
        cout<<"Case "<<c<<": " << func(0)<<endl;
        c++;
    }
    

}