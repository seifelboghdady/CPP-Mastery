#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m; cin>>n>>m;
    vector<string> grid(n);
    for (int i = 0; i < n; i++)
    {
        cin>>grid[i];
    }

    pair<int, int> start, end;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(grid[i][j]=='A'){
                start = { i, j };
            }else if(grid[i][j]=='B'){
                end = {i,j};
            }
        }
        
    }

    queue<pair<int,int>> q;
    vector<vector<bool>> visited(n);
    vector<int> distance(n);
    vector<vector<int>> parent(n, vector<int>(m));
    //\\=======//
    pair<int,int> src = end;
    // q.push(s)
}