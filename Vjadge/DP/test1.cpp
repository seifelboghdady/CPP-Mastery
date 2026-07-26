#include <bits/stdc++.h>
using namespace std;

int fab1(int n){
    //base case
    if(n==1) return 1;
    if(n==0) return 0;

    return fab1(n-1) + fab1(n-2);
}

int n = 1e4;
vector<int> vis(n), dp(n);

int fabdp(int n){
    if(n==1) return 1;
    if(n==0) return 0;
    if(vis[n]) return dp[n];
    vis[n]=1;
    return dp[n] = fabdp(n-1) + fabdp(n-2);

}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cout<<fab1(5)<<endl;
    cout<<fab1(6)<<endl;
    cout<<fab1(10)<<endl;
    cout<<fab1(11)<<endl;

}