#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vector<double> point(n);
    int lastx =0, lasty=0;
    int count =0;
    for (int i = 0; i < n; i++)
    {
        int a,b; cin>>a>>b;
        point[i] = (a*1.0/b);
        // cout<<point[i]<<" ";
        if(point[i] <= 1 && point[i]>0) count++;
        
    }
    cout<<endl;
    cout<<count;
    

}