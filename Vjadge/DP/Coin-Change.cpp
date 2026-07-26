#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
int dp[N][5] ; 
vector<int> coins={50, 25, 10, 5, 1};

int coin(int mon, int idx){

    //base case
    if(mon==0){
        return 1;
    }
    if (idx == 5)
        return 0;
    
    int & ret = dp[mon][idx];
    if(~ret) return ret;

    ret =0;

   
    
    //take 
    if (mon >= coins[idx])
        ret += coin(mon - coins[idx], idx);
    //leave
    ret += coin(mon, idx+1);
    return ret;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; 
    ::memset(dp, -1, sizeof dp);
    while(cin>>n)
        cout<<coin(n, 0)<<endl;

}