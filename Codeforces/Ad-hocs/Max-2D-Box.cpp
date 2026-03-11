#include <iostream>
#include <algorithm>
using namespace std;


long long pre[1005][1005];
int main(){
    // Fast I/O is crucial for large matrices
    ios_base::sync_with_stdio(false);
    int n, m, x, y; cin>>n>>m>>x>>y;
    for (int i = 1; i <= n; i++)
    {
        for (int j =1; j <=m ; ++j)
        {
            cin>>pre[i][j];
        }
        
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j =1; j <=m ; ++j)
        {
            pre[i][j]+= pre[i][j-1];
        }
        
    }

    for (int i = 1; i <= n; ++i)
    {
        for (int j =1; j <=m ; ++j)
        {
            pre[i][j]+= pre[i-1][j];
        }
        
    }
    long long sum = LONG_LONG_MIN;
    for(int d = x; d <=n ; d++){
        for(int r= y; r<= m; r++){
            long long u = d-x+1, l = r-y+1;

            sum = max(sum,pre[d][r]-pre[d][l-1] - pre[u-1][r]+pre[u-1][l-1]);
            
        }
    }
    cout<<sum;
}