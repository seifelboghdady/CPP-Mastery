#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while (t--)
    {
        int x,y,z; cin>>x>>y>>z;
        if(y >= z) cout<<string(x+y+z, 'R');
        else if(z >= x) cout<<string(x+y+z, 'S');
        else cout<<string(x+y+z, 'P');
        cout<<'\n';
    }
    

}