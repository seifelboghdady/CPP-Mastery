#include <bits/stdc++.h>
#define int long long
using namespace std;

int weird(int n){
    if(n==1) return 0;

    if(n%2==0) {
        cout<<n/2<<" ";
        n/=2;
    }else{
        cout<<n*3 + 1<<" ";
        n = n*3 + 1;
    }
    return weird(n);
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //3→10→5→16→8→4→2→1
    int n; cin>>n;
    cout<<n<<" ";
    weird(n);
}