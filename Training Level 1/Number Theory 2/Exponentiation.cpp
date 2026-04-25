#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

const int M = 1e9+7;



int mul(int a, int b, int m){
    return (a%m * b%m) %m;
}

int fast_power(int a, int b){
    int ans = 1;
    while (b)
    {
        if(b&1){
            ans = ans * a % M;
        }
        a= a*a %M;
        b>>=1;
    }
    return ans;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){
        int a,b; cin>>a>>b;
        cout<<fast_power(a,b)<<endl;
    }
}