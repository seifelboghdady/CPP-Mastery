#include <bits/stdc++.h>
#define int long long
using namespace std;

bool can(vector<pair<int,int>> &firends, int d, int firend_factor){
    auto start = firends[0];
     int max_firend_factor = firends[0].second;
    for (int i = 0; i < firends.size(); i++)
    {
       if(start.first-firends[i].first <= d)
       {
            max_firend_factor += firends[i].second;
       } 
    }
    return firend_factor< max_firend_factor;
}

bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, d; cin>>n>>d;
    vector<pair<int,int>> x(n);
    for (int i = 0; i < n; i++)
        cin>>x[i].first>>x[i].second;

    sort(x.begin(), x.end(), cmp);

    int l=0, r=1e9, mid, ans;
    while (l<= r)
    {
        mid = (l+r)/2;
        if(can()){
            ans = mid;
            l= mid+1;
        }else{
            r = mid-1;
        }
    }

}