#include <bits/stdc++.h>
using namespace std;

int checkInner(vector<int>&a, vector<int>&b, int i =0){
    if(i == a.size()) return 0;
    return a[i]*b[i]+checkInner(a,b, ++i);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++) cin>>a[i];
    for (int i = 0; i < n; i++) cin>>b[i];
    
    if(checkInner(a,b)==0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}