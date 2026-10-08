#include <bits/stdc++.h>
using namespace std;

struct sparceTable{
    vector<vector<int>> data;
    vector<int> logs;

    sparceTable(vector<int> &arr){
        int n = arr.size();
        logs.assign(n+1, 0);
        for (int i = 2; i <= n; i++)
        {
            logs[i] = logs[i/2] +1;
        }
        data.assign(logs[n] +1, vector<int>(n));
        data[0] = arr;

        
    }
};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    

}