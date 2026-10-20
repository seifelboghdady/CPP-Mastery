#include <bits/stdc++.h>
using namespace std;

struct sparceTable{
    vector<vector<int>> data;
    vector<int> logs;

    int merge(int & lf, int & lr){
        return min(lf, lr);
    }

    sparceTable(vector<int> &arr){
        int n = arr.size();
        logs.assign(n+1, 0);
        for (int i = 2; i <= n; i++)
        {
            logs[i] = logs[i/2] +1;
        }
        data.assign(logs[n] +1, vector<int>(n));
        data[0] = arr;

        for(int i =1; i<= logs[n]; i++){
            int len = 1 << i;
            for (int j = 0; j+len <= n ; j++)
            {
                data[i][j]= merge(data[i-1][j], data[i-1][j+(len>>1)]);
            }
            
        }
        
    }
    int get(int l, int r){
        int len = r-l+1;
        int level = logs[len];
        return merge(data[level][l], data[level][r-(1<<level)+1]);
    }
};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    sparceTable st = sparceTable(arr);

}