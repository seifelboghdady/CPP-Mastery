#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int power(int a, int b, int M){
    a %= M;
    int ret = 1;
    while (b){
        if(b & 1) ret = ret * a % M;
        a = a * a % M;
        b >>= 1;
    }
    return ret;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    const int M = 1e9+7;
    int t; cin>>t;
    while(t--){
        int a, b, c; cin>>a>>b>>c;
        if (a == 0 && b == 0 && c == 0) {
            cout << 1 << endl;
            continue;
        }
        int num = power(a, power(b, c, M-1), M);
        cout<<num<<endl;
    }
}