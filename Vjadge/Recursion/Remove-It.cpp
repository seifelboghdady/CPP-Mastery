#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> RemoveIt(vector<int> &s, vector<int> &ans, int x, int i=0){
    if(i>= s.size()) return ans;
    if (s[i] != x)
        ans.push_back(s[i]);
 
    return RemoveIt(s,ans,x,++i);
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x ; cin>>n>>x;
    vector<int> nums(n);
    vector<int> ans;
    for (int i = 0; i < n; i++) cin>>nums[i];
    ans = RemoveIt(nums,ans,x);
    for (int i : ans)
    {
        cout<<i<<" ";
    }
    
}