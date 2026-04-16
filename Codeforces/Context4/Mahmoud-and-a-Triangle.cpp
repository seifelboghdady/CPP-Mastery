#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n ; cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin>>a[i];

    sort(a.begin(), a.end());
    string check = "NO";
    for (int i = 0; i < n-2; i++)
    {
        if(a[i]+a[i+1]>a[i+2]){
            check = "YES";
        }
    }
    
    cout<<check;
}