#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m; cin>>m;
    vector<int>a(m);
    for (int i = 0; i < m; i++)
    {
        cin>>a[i];
    }
    int count=0;
    for (int i = 1; i < m-1; i+=1)
    {
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            count++;
        }
    }
    cout<<count;
    

}