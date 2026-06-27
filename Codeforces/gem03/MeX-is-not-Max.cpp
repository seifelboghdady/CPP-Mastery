#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;

    for (int i = 0; i < t; i++)
    {
        int n; cin>>n;
        vector<int> a(n);
        for (int x = 0; x < n; x++)
        {
            cin>>a[x];
        }

        
        sort(a.begin(), a.end());

        int mex = 0;
        for (int j = 0; j < n; j++)
        {
            if(mex==a[j]){
                mex++;
            }else if(mex<a[j]){
                break;
            }
            
        }
        cout<<mex<<endl;
        
        
    }
    

}