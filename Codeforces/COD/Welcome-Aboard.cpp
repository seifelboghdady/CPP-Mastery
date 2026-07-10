#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vector<string>s(n);
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }

    int len = s[0].size();
    for (int i = 0; i < len; i++)
    {
       for (int j = 1; j < n; j++)
       {
            if(s[j][i] != s[0][i]){
                cout<<i;
                return 0;
            }
       }
       
    }
    cout<<len;
}