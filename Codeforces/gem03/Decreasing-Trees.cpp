#include <bits/stdc++.h>
#define int long long
using namespace std;

int fact(int n){
    if(n==1||n==0) return 1;
    return n * fact(n-1);
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        cout<<fact(n-1)<<"\n";
    }
    

}