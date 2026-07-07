#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m; cin>>n>>m;
    vector<string> grid(n);
    for (int i = 0; i < n; i++)
        cin >> grid[i];
    
    vector<vector<int>> up(n, vector<int>(m, 0));
    vector<vector<int>> right(n, vector<int>(m, 0));

    for (int j = 0; j < m; j++)
    {
        for (int i = 1; i < n; i++)
        {
            if (grid[i][j] == grid[i-1][j])
                up[i][j] = up[i-1][j] + 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = m - 2; j >= 0; j--)
        {
            if (grid[i][j] == grid[i][j+1])
                right[i][j] = right[i][j+1] + 1;
        }
    }
    long long ans=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = m - 2; j >= 0; j--)
        {
            /* code */
            ans += 1LL * up[i][j] * right[i][j];
        }
        
        
    }
    cout<<ans;
}