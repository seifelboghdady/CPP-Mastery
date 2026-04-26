#include <bits/stdc++.h>
#define int long long
using namespace std;

int gcd_optimal(int a, int b){
    if(a>b) swap(a,b);
    while(a){
        b %=a;
        swap(a,b);
    }
    return b;
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while (t--)
    {
        /* code */
        int n; cin>>n;
        int count =0;
        int ans=0;
        for (int i = 0; i < n; i++)
        {
            int x; cin>>x;
            int ans= gcd_optimal(ans, x);
            if(ans==1) count++;
        }
        if(count) cout<<count<<endl;
        else cout<<-1<<endl;
    }
}