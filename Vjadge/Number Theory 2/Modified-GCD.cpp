#include <bits/stdc++.h>
#define int long long
using namespace std;

int gcd_optimal(int a, int b){
    if(a>b) swap(a,b);
    while (a)
    {
        b %= a;
        swap(a,b);
    }
    return b;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b; cin>>a>>b;
    int q; cin>>q;
    const int g= gcd_optimal(a,b);
    while (q--)
    {
        int low, higth; cin>>low>>higth;
        int ans =-1;
        for (int i = 1; i*i <= g; i++)
        {
            int d=0, d2=0;
            if(g%i==0){
                d= i;
                d2= g/i;
            }

            if (d>=low && d<=higth){
                ans  = max(ans,d);
            }
            if (d2>=low && d2<=higth){
                ans = max(ans, d2);
            }
        }
        cout<<ans<<endl;
    }
}