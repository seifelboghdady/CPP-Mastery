#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    vector<int> num;
    while (t--)
    {
        int n, m;
        cin>>n>>m;
        num.resize(m);
        for (int i = 0; i < m; i++)
        {
            cin>>num[i];
        }
        int tem = num[0];
        for (int i = 1; i < m; i++)
        {
            tem ^= num[i];
        }
        int rem = n-m;
        rem %= 3;
        if(rem == 0){
            cout<<tem<<"\n";
        }else if(rem == 1){
            int last = num[m-1] ^ num[m-2];
            tem ^= last;
            cout<<tem <<"\n";
        }else{
            
            cout<<(tem ^ num[m-1])<<"\n";
        }
        
    }

}