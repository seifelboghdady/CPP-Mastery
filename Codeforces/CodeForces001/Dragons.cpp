#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int s,n;
    cin>>s>>n;
    vector<pair<int,int>>x(n);
    
    for (int i = 0; i < n; i++)
    {
        cin>>x[i].first>>x[i].second;
    }
    sort(x.begin(), x.end());
    bool flag =true;
    for (int i = 0; i < n; i++)
    {
        if(s>x[i].first){
            s += x[i].second;
        }else{
            flag = false;
            break;
        }
    }
    cout<<(flag?"YES":"NO");



}