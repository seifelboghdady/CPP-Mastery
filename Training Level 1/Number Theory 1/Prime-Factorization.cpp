#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> primefactorization(long long n){
    vector<int>ans;
    for (int i = 2; i*i <= n; i++)
    {
        while(n%i==0){
            ans.push_back(i);
            n/=i;
        }
    }
    if(n!=1) ans.push_back(n);
    return ans;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n; cin>>n;
    vector<int> prime = primefactorization(n);
    set<int> s;
    for(auto d : prime) s.insert(d);

    for(auto d: s) cout<<d<<'\n' ;
    
}
