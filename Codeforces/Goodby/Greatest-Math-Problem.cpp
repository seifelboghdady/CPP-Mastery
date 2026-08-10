#include <bits/stdc++.h>
#define int long long
using namespace std;


int n, k;
int calc(int x, vector<int> &a){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=floor(a[i]/x);
    }
    return sum >= k*k;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;
    while (t--)
    {
        cin>>n>>k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        int l = 1, r = a[n-1];
        int ans = -1;
        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (calc(mid, a)){
                ans = mid;
                l = mid+1;
            }
            else
                r = mid-1;
        }

        cout << ans << '\n';
        
    }
    
}