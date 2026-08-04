#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    vector<int> num;
    while(t--){
        int n; cin>>n;
        num.resize(n);
        for (int i = 0; i < n; i++)
        {
            cin>>num[i];
        }
        
        //
        sort(num.begin(), num.end());
        //
        int cur=1, mx=0;
        for (int i = 1; i < n; i++)
        {
            if(num[i]- num[i-1]<=1) cur++;
            else{

                mx = max(mx, cur);
                cur =1;
            }
        }
        cout<<n-max(mx, cur)<<endl;
    }

}