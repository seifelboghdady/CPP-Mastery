#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int b[n];
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int L = 0;
    int R = n - 1;

    while (L <= R) {
        if (L == R) {
            cout << b[L] << " ";
        } else {
            cout << b[L] << " " << b[R] << " ";
        }
        L++;
        R--;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}