#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int D;
    cin >> D;
    
    if (D <= 0) {
        cout << 0 << endl;
        return 0;
    }
    
    int mod = 2026;
    long long a = 1;
    long long b = 1;
    
    for (int i = 2; i <= D; i++) {
        long long next = (a + b) % mod;
        a = b;
        b = next;
    }
    
    cout << b << endl;

}