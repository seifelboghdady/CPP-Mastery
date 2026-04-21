#include <bits/stdc++.h>
using namespace std;

/* Linear Sieve Works on O(N) */

const int N = 1e7;
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
    int t; cin>>t;
    while (t--)
    {
        /* code */
        int n; cin>>n;
        cout<<primes[n-1]<<endl;
    }
    

}