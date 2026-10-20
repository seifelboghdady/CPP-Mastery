#include <bits/stdc++.h>
using namespace std;



int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin>>a[i];

        int gcd1 = 0;
        for (int i = 0; i < n; i++)
        {
            gcd1= gcd(gcd1, a[i]);
        }
        cout<<gcd1;
        
    }

}