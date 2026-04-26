#include <bits/stdc++.h>
using namespace std;

int gcd_optimal(int a, int b){
    if(a>b) swap(a,b);
    while(a){
        b %=a;
        swap(a,b);
    }
    return b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, X; cin>>n>>X;
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        ans = gcd_optimal(ans, abs(x-X));
    }
    cout<<ans;
}