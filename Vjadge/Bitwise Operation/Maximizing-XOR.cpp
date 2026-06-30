#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int l, r; cin>>l>>r;
    int mx = 0;
    for (int i = l; i < r; i++)
    {
        
        int res = i^i+1;
        mx= max(mx, res);
    }
    cout<<mx;

}