#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k; cin>>n>>k;
    vector<vector<int>> a(n, vector<int>(n+1,0));
    for (int i = 0; i < n; i++)
    {
        int l = max(0, i-k);
        int r = min(n-1, i+k);
        for (int j = l; j <= r ; j++)
        {
            a[j][i]=1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        a[i][n]=1;
    }
    vector<int> where(n, -1);
    int row =0;
    for ( int col =0; col<n && row<n; col++)
    {
        int sel = -1;
        for (int i = row; i < n; i++)
        {
            if(a[i][col]){
                sel =i;
                break;
            }
        }
        
        if(sel== -1) continue;
        swap(a[sel], a[row]);
        where[col] = row;

        for (int i = 0; i < n; i++)
        {
            if(i != row && a[i][col]){
                for(int j = col; j<= n; j++)
                    a[i][j] ^= a[row][j];
            }
        }
        row++;
    }

    vector<int> ans(n, 0);
    for (int i = 0; i < n; i++)
    {
        if(where[i] != -1)
            ans[i] =a[where[i]][n];
    }

    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        if(ans[i])
            res.push_back(i+1);
    }

    cout<<res.size()<<"\n";
    for (int x : res)
    {
        cout<<x<<" ";
    }
    

}