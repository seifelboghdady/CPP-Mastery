#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int p; cin>>p;
    int n = gcd(p, 100);
    
    cout<< 100/n;

}