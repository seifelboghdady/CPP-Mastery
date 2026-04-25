#include <bits/stdc++.h>
#define int long long
using namespace std;

bool predict(vector<int> &s, int Caw, int d){
    int count = 1;
    int current = s[0];
    for (int i = 1; i < s.size(); i++)
    {
        if(d<=(s[i]-current)){
            count ++;
            current = s[i];
        }
    }

    if(count>=Caw){
        return true;
    }else{
        return false;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while (t--)
    {
        int n, c; cin>>n>>c;
        vector<int> stall(n);
        for (int i = 0; i < n; i++) cin>> stall[i];
        //sort before search
        sort(stall.begin(), stall.end());

        int l =0, r= stall[n-1] - stall[0], mid, ans=0;
        while (l<=r)
        {
            mid = (l+r)/2;
            if(predict(stall, c, mid)){
                ans = mid;
                l = mid+1;
            }else{
                r = mid -1;
            }
        }
        cout<<ans<<'\n';
    }
}