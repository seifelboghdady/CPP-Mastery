#include <bits/stdc++.h>
#define int long long
using namespace std;


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin>>s;

    vector<string> ans;
    sort(s.begin(), s.end());
    do{
        ans.push_back(s);
    }while(next_permutation(s.begin(), s.end()));

    cout<<ans.size()<<'\n';
    for(auto &x : ans){
        cout<<x<<endl;
    }

}