#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while (t--)
    {
        string s; cin>>s;

        //edge case 
        int cnt =0;
        for (int i = 1; i < s.size(); i++)
        {
            if(s[i-1]!=s[i] && s.size()>1){
                cnt++;
            }
        }
        
        if(cnt==0){
            cout<<0<<endl;
            continue;;
        }

        //max size
        int n = s.size();
        int res = 2*(n-1);
        cout<<res<<endl;
    }
    

}