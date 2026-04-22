#include <bits/stdc++.h>
using namespace std;

map<int, int> primeFactorizationMap(int n){
 
    map<int, int> ans;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0){
            ans[i]++;
            n /= i;
        }
    }
    if(n != 1) ans[n]++;
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    int ans=0;
    for (int i = 2; i <= n; i++)
    {
        /* code */
        map<int,int> pr = primeFactorizationMap(i);
        if(pr.size()==2){
            ans++;
        }
    }
    cout<<ans;
}