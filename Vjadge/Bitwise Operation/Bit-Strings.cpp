#include <bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9+7;

int fastpower(int a, int b){
    int res =1;
    while (b)
    {
        if(b&1){
            res =(res *a)%mod;
        }
        a =(a*a)%mod;
        b>>=1;
    }
    return res%mod;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n ; cin>>n;
    cout<<fastpower(2,n);

}