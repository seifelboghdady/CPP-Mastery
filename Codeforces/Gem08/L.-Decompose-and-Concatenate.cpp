#include <bits/stdc++.h>
using namespace std;

// int modpow(int x, int n) {
//     if (n == 0) return 1;
//     int u = modpow(x,n/2);
//     u = (u*u);
//     if (n%2 == 1) u = (u*x);
//     return u;
// }

int pow(int b, int p){
    if(p==1) return b;
    return b*pow(b, p-1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x; cin>>x;
    string best = "";
    for (int i = 1; i < x; i++)
    {
        int j = x-i;
        string concat = to_string(i)+ to_string(j);
        if(best.length()<concat.length()){
            best=concat;
        }else if(concat.length() == best.length() && concat > best){
            best = concat;
        }

    }
    cout<<best;

}