#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin>>n>>m;
    vector<int>f(m);
    for (int i = 0; i < m; i++)
    {
        /* code */
        cin>>f[i];
    }
    sort(f.begin(), f.end());

    int dif= INT_MAX;
    for (int i = 0; i + n <= m; i++) {
        dif = min(dif, f[i + n - 1] - f[i]);
    }
    cout<< dif;
    
    

}