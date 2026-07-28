#include <bits/stdc++.h>
#define int long long
using namespace std;

struct Projects
{
    int start, end, reward;
};
bool comp(Projects a, Projects b){
    return a.start<b.start;
}
int n ,ans; 
vector<Projects> v;

int dp[200005];

int func(int i){
    
    //basecase
    if(i>n) return 0;
    //dp
    int & ret = dp[i];
    if(~ret) return ret;
    

    //leave
    ret =0;
    ret = func(i+1);
    
    //take p[i]+func
    int j = upper_bound(v.begin(), v.end(), v[i].end, [](int val, const  Projects &p){
        return val < p.start;
    }) - v.begin();
    ret = max(ret, v[i].reward + func(j));
    //return 
    return ret;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n;
    v.resize(n+1);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i].start>>v[i].end>>v[i].reward;
    }

    sort(v.begin(), v.end(), comp);

    ::memset(dp, -1, sizeof dp);
    //====================//
    
    cout<<func(0);

}