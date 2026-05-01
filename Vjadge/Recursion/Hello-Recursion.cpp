#include <bits/stdc++.h>
using namespace std;

int recursion(vector<int> &v ,int s){
    
    if(s==0) return 0 ;
    return v[s-1]+ recursion(v, s-1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    int caseNum =1;
    while (t--)
    {
        int n; cin>>n;
        vector <int> N(n);
        for (int i = 0; i < n; i++) cin>>N[i];

        cout<<"Case "<<caseNum++<<": "<<recursion(N, n)<<endl;
    }
}