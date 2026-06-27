#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, M, D;
    cin>>n>>M>>D;
    
    int mn = INT_MAX, mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int num; cin>>num;
        mn = min(mn, num);
        mx = max(mx, num);
    }
    int r = mx - mn;
    if(r==D){
        cout<<n;
    }else if(r>D){
        cout<<"impossible";
    }else{
        if(mn+D<=M||mx - D >= 0){
            cout << n + 1;
        }else{
            cout << n + 2;
        }
    }

}