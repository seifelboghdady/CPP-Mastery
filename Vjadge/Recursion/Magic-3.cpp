#include <bits/stdc++.h>
using namespace std;

int check(int s, int d, vector<int> &x, vector<int> &y, int i=0){
    if(i==x.size()) return 0;
    if(s>x[i]&&d<y[i]) return 1;
    return check(s, d, x, y, ++i);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, s,d;
    cin>>n>>s>>d;
    vector<int> x(n);
    vector<int> y(n);
    for (int i = 0; i < n; i++) cin>>x[i]>>y[i];

    if(check(s,d,x,y))
        cout<<"Yes";
    else
        cout<<"No";
}