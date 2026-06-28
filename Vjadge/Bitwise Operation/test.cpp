#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q; cin>>n>>q;
    vector<int> nums(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin>>nums[i];
    }

    // Solve in O(1)
    vector<vector<int>>pref(32, vector<int>(n+1));
    for (int bit = 0; bit < 32; bit++)
    {
        for (int i = 1; i <= n; i++)
        {
            /* code */
            pref[bit][i] = nums[i]>>bit & 1;
            pref[bit][i] += pref[bit][i-1];
        }
          
    }
    






    while (q--)
    {
        int l, r; cin>>l>>r;
        // int res = ~0;
        // l--; r--;
        // for (int i = l; i <= r; i++)
        // {
        //     res &= nums[i];
        // }
        // cout<<res<<endl;
        int ans =0;
        int len = r-l+1;
        for (int bit = 0; bit<n; bit++)
        {
           int cnt = pref[bit][r]-pref[bit][l-1];
           if(cnt==len){
                ans+=1<<bit;
           }
        }
        cout<<ans<<endl;
    }
    
    

}