#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    int first[26]={};
    int ans = n-1;
    for (int i = 1; i <= n; i++)
    {
        char c; cin>>c;
        if(first[c-'A']==0) first[c-'A']=i;
        ans= min(ans, n-(i-first[c-'A']));
    }
    cout<<ans;

}