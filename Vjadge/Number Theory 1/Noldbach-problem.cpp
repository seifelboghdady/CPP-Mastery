#include <bits/stdc++.h>
using namespace std;

/* Linear Sieve Works on O(N) */

const int N = 1e3;
vector<int> lp(N + 1);
vector<int> primes;
void sieve()
{
    for (int i = 2; i <= N; ++i) {
        if(lp[i] == 0) {
            lp[i] = i;
            primes.push_back(i);
        }
        for (int j = 0; i * primes[j] <= N; ++j) {
            lp[i * primes[j]] = primes[j];
            if (primes[j] == lp[i]) {
                break;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();
    int n,k; cin>>n>>k;
    int ans=0;
    for (auto p: primes)
    {
        if(p>n) break;
        for (int i = 0; i+1 < primes.size(); i++)
        {
            if(primes[i]+primes[i+1]+1==p){
                ans ++;
                break;
            }
        }   
    }
    if(ans>=k){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}