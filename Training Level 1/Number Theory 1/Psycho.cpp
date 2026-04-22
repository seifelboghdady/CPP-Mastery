#include <bits/stdc++.h>
#define int long long
using namespace std;

/* Linear Sieve Works on O(N) */

const int N = 1e7+5;
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

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();
    int t; cin>>t;
    while (t--)
    {
        /* code */
        int n; cin>>n;
        int evens=0 ,odds=0;
        while (n!=1)
        {
            int p = lp[n], c=0;
            while(n%p==0) n/=p, c++;
    
            if(c%2==0){
                evens++;
            }else{
                odds++;
            }
        }
        if(evens>odds){
            cout<<"Psycho Number\n";
        }else{
            cout<<"Ordinary Number\n";
        }
    }
    
}