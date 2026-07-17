#include <bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9+7;

// int ncr(int n, int r){
//     int ans =1;
//     for (int i = 1; i <= r; i++)
//     {
//         ans *=((n-i+1)/i)%mod;
//     }
//     return ans;
// }
const int N = 1e6+1;
int fact[N];
void buildfact(){
    fact[0]=fact[1]=1;
    for (int i = 2; i < N; i++)
    {
        fact[i]= (i*fact[i-1])%mod;
    }
    
}

int power(int b, int e, int m) {
    int ans = 1;
    for (; e; b = b * b % m, e /= 2)
    if (e & 1) ans = ans * b% m;
    return ans;
}


int inverse(int x){
    return power(x, mod - 2, mod);
}

int chooseFact(int n, int r){
    return fact[n] * inverse(fact[r]) % mod * inverse(fact[n-r]) % mod;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    buildfact();
    int t; cin>>t;
    while(t--){
        int n, r; cin>>n>>r;
        int res = chooseFact(n,r);
        cout<<res<<'\n';
    }

}