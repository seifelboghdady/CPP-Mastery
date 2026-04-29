#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while (t--)
    {
        string a; cin>>a;
        string b; cin>>b;

        int l = lcm(a.size(), b.size());

        string s, t;
        while(s.size()!=l) s += a;
        while(t.size()!=l) t += b;
        
        if(s==t){
            cout<<s<<endl;
        }else
        {
            cout<<-1<<endl;
        }
    }

}