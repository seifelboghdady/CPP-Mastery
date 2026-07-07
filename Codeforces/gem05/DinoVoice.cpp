#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int ans =0;
    while (a.size()>1)
    {
        /* code */
        vector<int> next;

        for (int i = 0; i + 1 < a.size(); i += 2)
        {
            int dif = max(a[i], a[i+1]) - min(a[i], a[i+1]);
            ans = max(dif,ans);
            int winner = max(a[i], a[i+1]);
            next.push_back(winner);
        }
        if(a.size()%2==1) next.push_back(a[a.size()-1]);
        a = next;
        
    }
    cout<<ans;
    
}
