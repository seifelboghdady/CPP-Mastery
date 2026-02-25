#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int x[n], y[n], z[n];
    for(int i = 0; i<n ; i++){
        cin>>x[i]>>y[i]>>z[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        int ctx =0 , cty = 0, ctz =0;
        for (int j = 0; j < n; j++)
        {
            if(i==j) continue;
            if(x[i]==x[j]){
                ctx++;
            }
            if(y[i]==y[j]){
                cty++;
            }
            if(z[i]==z[j]){
                ctz++;
            }
        }
        cout<<ctx<<' '<<cty<<' '<<ctz<<'\n';
    }
    
}