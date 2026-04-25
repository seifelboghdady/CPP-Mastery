#include <bits/stdc++.h>
typedef long double ld;
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    vector <int> x(n);
    for (int i = 0; i < n; i++)
    {
        cin>>x[i];
    }
    sort(x.begin(), x.end());
    vector <ld> base;
    auto can = [&](ld power){
        base = {x[0]+power};
        for (int i = 1; i < n; i++)
        {
            if(x[i]-base.back()<= power){
                continue;
            }else{
                base.push_back(x[i]+power);
            }
        }
        return base.size()<=3;
    };
    
    ld l=0, r=1e9, mid;
    while (r-l>= 1E-10)
    {
        mid = (l+r)/2;
        if(can(mid)){
            r= mid;
        }else{
            l = mid;
        }
    }
    can(r);
    cout<<fixed << setprecision(6)<<r<<'\n';
    while(base.size()<3) base.push_back(base.back());
    for(auto pos : base) cout<<fixed << setprecision(6)<<pos<<" ";

}