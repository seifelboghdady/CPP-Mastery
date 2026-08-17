#include <bits/stdc++.h>
#define int long long
using namespace std;

// int dp[100][100];

// int win(int n, int k){
//     //baseCase
//     if(n==0) return 0;

//     //dp...
//     int & ret = dp[n][k];
//     if(!ret) return ret;

//     //
//     for (int i = 1; i <= min(n,k); i++)
//     {
//         if(!win(n-i, i)){
//             return ret = 1;
//         }
//     }
    

//     return ret =0;
// }

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // ::memset(dp, -1, sizeof dp);
    // for (int k = 1; k <= 5; k++) {
    //     cout << "k = " << k << "\n";

    //     for (int n = 1; n <= 30; n++) {
    //         cout << (win(n, k) ? 'W' : 'L') << ' ';
    //     }

    //     cout << "\n\n";
    // }
    int t; cin>>t;
    while (t--)
    {
        int n, k; cin>>n>>k;
        if(k>= (n & -n)){
            cout<<"Alice"<<endl;
        }else{
            cout<<"Bob"<<endl;
        }
    }
    
}