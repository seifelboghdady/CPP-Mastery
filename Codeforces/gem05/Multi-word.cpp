#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t; cin>>s>>t;
    int p,q; cin>>p>>q;
    // cout<<s<<" "<<t<<'\n';

    // string s2 , t2  ;
    // while(p--)
    //     s2+=s;
    
    // while (q--)
    // {
    //     t2 += t;
    // }
    
    // cout<<s2<<" "<<t2<<'\n';

    string txt = s+t;
    string txt2 = t+s;
    // cout<<txt<<" "<<txt2<<'\n';


    bool flag =0;
    if (p == 0 || q == 0) {
        cout << '=';
        
    }else{
        for (int i = 0; i < txt.length(); i++)
        {
            if((txt[i]-'a')>(txt2[i]-'a')){
                cout<<'>'<<'\n';
                flag=1;
                break;
            } else if((txt[i]-'a')<(txt2[i]-'a')){
                cout<<'<'<<'\n';
                flag=1;
                break;
            }
                
        }
        if(!flag)
            cout<<'=';
    }
    


}