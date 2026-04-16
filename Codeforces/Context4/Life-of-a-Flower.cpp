#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector <int> f(n);
        for (int i = 0; i < n; i++) cin>>f[i];
        
        int count =1;
        if (f[0] == 1) count += 1;
        bool dead = false;
        for (int i = 1; i < n; i++)
        {
            if (f[i] == 0 && f[i-1] == 0) {
                dead = true;
                break;
            }

            if(f[i]==1&&f[i-1]==1){
                count +=5;
            }else if(f[i]==1){
                count ++;
            }
        }
        if (dead) cout << -1 << "\n";
        else cout << count << "\n";
        
    }
    

}