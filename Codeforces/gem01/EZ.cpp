#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    int total=0;
    if(n%2==0){
        for (int i = 2; i <= n; i+=2)
        {
            total+=i;
        }
        
    }else{
        for (int i = 1; i <= n; i+=2)
        {
            total+=i;
        }
        
    }
    cout<<total<<endl;

}