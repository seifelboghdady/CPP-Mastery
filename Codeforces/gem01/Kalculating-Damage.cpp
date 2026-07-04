#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    char ta, td;
    int p, h;
    cin>>ta>>td>>p>>h;
    //If (Ta,Td) =(F,G), (G,W), or (W,F), then M(Ta,Td)=2.
    float m=0;
    if(ta=='F' && td == 'G' || ta=='G' && td == 'W'||ta=='W' && td == 'F'){
        //max(0,H−P⋅M(Ta,Td))
        m=2;
    }else{
        m=0.5;
    }
    int x = max(0,(int)(h-p*m));
    if(x>0) cout<<"Sobraram "<<x<<" pontos de vida!";
    else cout<<"Nocaute!";
    // cout<<(x>0):?"Nocaute!";


}