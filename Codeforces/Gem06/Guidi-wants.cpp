#include <bits/stdc++.h>
using namespace std;

int dp[1000][1000];
string s, t;
int func(int i, int j){
    //baseCase
    if(i>= s.size() || j>= t.size()) return 0;
    //dp
    int & ret = dp[i][j];
    if(~ret) return ret;

    ret =0;
    // ch1 if(i != j)
    int ch1 = func(i+1, j);
    
    int ch2 = func(i, j+1);
    ret = max(ch1, ch2);
    // ch2 if (i == j) + 1 and move in two direction 
    if(s[i]==t[j])
        ret = max(ret, 1+ func(i+1, j+1));

    return ret;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>s>>t;
    ::memset(dp, -1, sizeof dp);
    cout<< func(0,0);

}