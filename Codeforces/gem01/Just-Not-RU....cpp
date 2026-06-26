#include <bits/stdc++.h>
#define int long long
using namespace std;

int isPrime(int n){
    if(n == 1) return false;
    for(int d = 2; d * d <= n; ++d){
        if(n % d == 0) {
            return false;
        }
    }
    return true;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    int cnt=0;
    for (int i = 2; i <= n; i++)
    {
        if(isPrime(i)){
            cnt++;
        }
    }
    cout<<cnt;

}