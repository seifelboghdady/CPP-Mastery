#include <bits/stdc++.h>
using namespace std;

bool check(int k, long long s , vector<int>&a){
    int n = a.size()-1;
    vector<long long> cost;
    long long sum=0;
    for (int i = 1; i <= n; i++)
    {
        cost.push_back(a[i] + 1LL * i * k);
    }
    sort(cost.begin(), cost.end());
    for (int i = 0; i < k; i++)
    {
        sum+=cost[i];
    }
    
    return s>=sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, s; cin>>n>>s;
    vector<int>a(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    
    //binary search 
    int l=0, r=n;
    
    int ans =0;
    while (l<=r)
    {
        int mid = l+(r-l)/2;
        if(check(mid,s,a)){
            ans = mid;
            l = mid + 1;
        }else{
            r=mid-1;
        }
    }
    
    vector<long long> cost;
    long long sum=0;
    for (int i = 1; i <= n; i++)
    {
        cost.push_back(a[i] + 1LL * i * ans);
    }
    sort(cost.begin(), cost.end());
    for (int i = 0; i < ans; i++)
    {
        sum+=cost[i];
    }
    cout << ans << ' ' << sum;
}