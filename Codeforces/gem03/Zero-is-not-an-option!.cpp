#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while (t--)
    {
        int n,m; cin>>n>>m;
        vector<vector<int>> nums(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j =0; j<m; j++)
            {
                cin>>nums[i][j];
            }
            
        }
        bool done = false;
        for (int bit =0; bit<=60; bit++)
        {
            bool all= true;
            for (int i = 0; i < n; i++)
            {
                bool found=false;
                for(int j=0; j<m; j++){
                    
                    if((nums[i][j]>>bit)&1){
                        found = 1;
                        break;
                    }
                }
                if(!found){
                    all = false;
                    break;
                }
            }
            if(all){
                done = true;
                break;
            }
        }
        if(done){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }   
}