#include <bits/stdc++.h>
using namespace std;

int dp[3000][3000];
string s,t;

int lcs(int i , int j){

    //baseCase
    if(i==s.size() || j==t.size()){
        return 0;
    }
    
    int & ret = dp[i][j];
    if(~ret) return ret;

    ret =0;
    //move i
    ret = lcs(i+1, j);

    //move j
    ret = max(ret, lcs(i, j+1));

    //choose max
    if(s[i]==t[j]){

        ret = max(ret, 1 + lcs(i+1, j+1));
    }
    return ret ;
}

void build(int i, int j){
    //baseCase
    if(i==s.size() || j==t.size()){
        return ;
    }
    
    //find optimal 
    int optimal = lcs(i,j);

    int ret =0;

    //move i
    ret = lcs(i+1, j);
    if(ret == optimal){
        build(i+1, j);
        return;
    }

    //move j
    ret = max(ret, lcs(i, j+1));
    if(ret == optimal){
        build(i, j+1);
        return;
    }

    //choose max
    if(s[i]==t[j]){
        ret = max(ret, 1 + lcs(i+1, j+1));
    }
    if(ret == optimal){
        cout<<s[i];
        build(i+1, j+1);
        return;
    }

    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>s>>t;
    ::memset(dp, -1, sizeof dp);

    build(0,0);

}