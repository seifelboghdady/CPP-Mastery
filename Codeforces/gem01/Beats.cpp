#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    /*
    1lrx
        — representing the operation chmod(l,r,x);
    2lrx
        — representing the operation chmax(l,r,x);
    3lr
        — representing the operation sum(l,r).
    */
   int n,q;cin>>n>>q;
   vector<int>a(n+1);
   for (int i = 1; i <= n; i++)
   {
        cin>>a[i];
   }
   
   while(q--){
        int op; cin>>op;
        if(op==1){

            int l,r,x; cin>>l>>r>>x;
            for (int i = l; i <= r; i++)
            {
                a[i]= a[i]%x;
            }
        }else if(op==2){
            int l,r,x; cin>>l>>r>>x;
            for (int i = l; i <= r; i++)
            {
                a[i]= max(a[i],x);
            }
        }else{
            int l,r; cin>>l>>r;

            int sum = 0;
            for (int i = l; i <= r; i++)
            {
                sum+= a[i];

            }
            cout<<sum<<endl;
        }
        
   }
   

}