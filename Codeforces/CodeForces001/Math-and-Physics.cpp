#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int> a(n);
        long long sum=0;
        for (int i = 0; i <n ; i++)
        {
            cin>>a[i];
            sum += a[i];
        }
        
        bool all = true;
        bool mid = true;
        for (int i = 0; i < n; i++)
        {
            if(all && i!= n-1){
                if(a[i]!=1){
                    all =false;
                }
            }
            if (i >= 1 && i <= n - 2 && a[i] >= 2) mid = true;
        }
        if(all) cout<<-1<<'\n';
        else if(mid) cout<<sum-1<<'\n';
        else cout<<sum - (n - 1)<<'\n';
    }
    

}