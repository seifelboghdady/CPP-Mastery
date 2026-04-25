#include <bits/stdc++.h>
#define int long long
using namespace std;

int gcd_optimal(int a, int b){
    if(a>b) swap(a,b);
    while(a){
        b %=a;
        swap(a,b);
    }
    return b;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    

}