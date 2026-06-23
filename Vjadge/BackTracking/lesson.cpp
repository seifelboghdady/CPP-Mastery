#include <bits/stdc++.h>
using namespace std;

vector<int> a;
int x,n;
int ans = 0;
void go(int i, int sum){
    //base case
    if(i==n){
        if(sum==x)ans++;
        return;
    }

    go(i+1, sum);
    go(i+1, sum+a[i]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>x;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    go(0,0);

    cout<<(ans>=1 ? "YES":"NO");

}