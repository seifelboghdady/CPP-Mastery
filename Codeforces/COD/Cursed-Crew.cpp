#include <bits/stdc++.h>
#define int long long
using namespace std;

int cnt[200005];
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    int mx_val=0;
    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        cnt[x]++;
        mx_val = max(mx_val, x);
    }
    vector<vector<int>> groups;
    for (int i = mx_val; i>=1; i--)
    {
        if(cnt[i]>0){
            vector<int> curgroup;

            for (int d = 1; d*d <= i; d++)
            {
                if(i%d==0){

                    if(cnt[d]>0){
                        while (cnt[d]>0)
                        {
                            curgroup.push_back(d);
                            cnt[d]--;
                        }
                    }
                    int d2 = i/d;
                    if(cnt[d2]>0){
                        while(cnt[d2]>0){
                            curgroup.push_back(d2);
                            cnt[d2]--;
                        }
                    }
                }

            }
            if(!curgroup.empty()){
                groups.push_back(curgroup);
            }
        }
        

    }
    for (const auto &group: groups)
    {
        cout<<group.size();
        for(int x: group){
            cout<<" "<<x;
        }
        cout<<"\n";
    }
    

}