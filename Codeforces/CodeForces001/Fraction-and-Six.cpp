#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while (t--)
    {
        int n,m; cin>>n>>m;
        string q,p; cin>>q>>p;

        int diff[26] = {0};
        for (int i = 0; i < n; i++)
        {
            diff[q[i]-'a'] += 1;
        }
        for (int i = 0; i < m; i++)
        {
            diff[p[i]-'a'] -=1;
        }

        int expected[26] = {0};

        expected['s' - 'a'] = 1;
        expected['i' - 'a'] = 1;
        expected['x' - 'a'] = 1;
        
        bool done = true;
        for (int i = 0; i < 26; i++) {
            if (diff[i] != expected[i]) done = false;
        }

        cout << (done ? "YES" : "NO") << "\n";
        
    }
    

}