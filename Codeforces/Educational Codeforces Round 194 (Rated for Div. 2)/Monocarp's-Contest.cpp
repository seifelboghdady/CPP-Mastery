#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int> a(n);
        int cnt_zero=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]==0){
                if(i==0||i==n-1) continue;
                cnt_zero++;
            }
        }
        if(a[0]==0&&a[n-1]==0){
            cout<<0<<endl;
        }else if(((a[0]==1&&a[n-1]==0)||(a[0]==0&&a[n-1]==1))&&cnt_zero>=1){
            cout<<1<<endl;
        }else if((a[0]==1&&a[n-1]==1)&&cnt_zero>=2){
            cout<<2<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    

}