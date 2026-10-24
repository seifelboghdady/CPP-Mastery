#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int mo = 1e9+7;

string L, R;
int m,d;
int dp[2000][2][2][2000][3];

//state is 0 --> for leading zeros, 1 -->odd , 2--> for even
ll func(int idx, bool low, bool hig, int mod,int state){

    
    if (idx == L.length())
        return mod == 0;


    if(~dp[idx][low][hig][mod][state]){
        return dp[idx][low][hig][mod][state];
    }

    int l = L[idx]-'0';
    int r = R[idx]-'0';

    int dl = low? 0: l;
    int dr = hig? 9: r;

    int ans=0;
    for (int i = dl; i <= dr; i++)
    {
        
        int new_state;
        if(state==0){
            if(i==0) new_state=0;
            else new_state=1;
        }else{
            new_state = 3- state;
        }
        if(new_state ==1 && i ==d) continue;
        if(new_state ==2 && i !=d) continue;
        ans+= func(idx+1, (low|| i>dl) , (hig|| i<dr),(mod * 10LL + i) % m, new_state);
        ans %= mo;
    }
    
    return dp[idx][low][hig][mod][state]=ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    cin>>m>>d;
    cin>>L>>R;

    while (L.length()<R.length())
    {
        L = "0"+ L;
    }
    

    memset(dp, -1, sizeof dp);

    cout<<func(0,0,0,0,0)<<"\n";
}