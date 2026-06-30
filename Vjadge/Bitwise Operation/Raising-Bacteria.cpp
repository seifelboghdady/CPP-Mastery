#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    int cnt =0;
    for (int bit = 0; bit < 32; bit++)
    {
        if((n>>bit)&1){
            cnt++;
        }
    }
    cout<<cnt;
    

}