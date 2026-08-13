#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int>b(n);
        int sum =0;
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
            sum+=b[i];
        }
        
        int cur=0;
        int x= LLONG_MAX;
        for (int i = 0; i < n-1; i++)
        {
            cur += b[i];
            sum-=b[i];

            if(sum == cur){
                x=0;
                break;
            }

            if(i+1 == (n-i-1)) continue;

            if((sum-cur)%(i+1-(n-i-1))==0 && (sum-cur)/(i+1-(n-i-1))>=0)
                x= min(x, (sum-cur)/(i+1-(n-i-1)));
        }
        cout<<(x==LLONG_MAX? -1: x)<<'\n';
    }
    

}