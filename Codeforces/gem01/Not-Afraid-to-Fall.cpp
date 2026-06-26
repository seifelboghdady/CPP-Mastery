#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m; cin>>n>>m;
    vector<int>freq(m+1,0);
    for (int i = 0; i < n; i++)
    {
        int ele; cin>>ele;
        freq[ele]+=ele;
    }

    for (int i = m-1; i >0; i--)
    {
        freq[i] += freq[i + 1];
    }
    
    
    for (int i = 1; i <= m; i++)
    {
        cout<<freq[i]<<" ";
    }
    
    

}