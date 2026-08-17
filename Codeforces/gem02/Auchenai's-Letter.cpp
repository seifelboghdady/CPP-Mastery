#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while (t--)
    {
        
        int a,b,c,x,y,z;
        cin>>a>>b>>c>>x>>y>>z;
        int bmxscore=0, bk1=0, bk2=0, bk3=0;
        int limit= min({a,b,c});
        // cout<<"Limit "<<limit<<endl;
        for (int i = 0; i <= limit; i++)
        {
            int rem_I = a - i;
            int rem_G = b-i;
            int rem_M = c-i;
            // cout<<"Test rem "<<rem_I<<" "<<rem_G<<" "<<rem_M<<endl;
            int k1, k2;
            if(z>y){
                k1 = min(rem_I, rem_M);
                k2 = min(rem_G, rem_M-k1);
            }else{
                k2 = min(rem_G, rem_M);
                k1 = min(rem_I, rem_M-k2);
            }
            
            int curscore = (x+y)*i + z *k1 + y*k2;
            if(curscore>bmxscore){
                bmxscore = curscore;
                bk1= i;
                bk2= k1;
                bk3 = k2;
            }
        }
        // cout<<"Best k: "<<bk1<<" "<<bk2<<" "<<bk3<<endl;
        cout<<bmxscore<<'\n';
        string res = "";
        res.reserve(a+b+c);
        for (int i = 0; i < bk1; i++) res+="IGM";
        for (int i = 0; i < bk2; i++) res+="IM";
        for (int i = 0; i < bk3; i++) res+="GM";
        

        res.append(c - bk1 - bk2 - bk3, 'M');
        res.append(a - bk1 - bk2, 'I');
        res.append(b - bk1 - bk3, 'G');
        cout<<res<<endl;
    }
    
}