#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>a(n);
        long long max=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            max+=a[i];
        }
        cout<<max<<'\n';
    }

}