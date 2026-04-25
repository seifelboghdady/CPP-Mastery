#include <bits/stdc++.h>
#define int long long
using namespace std;

/* Linear Sieve Works on O(N) */

const int N = 1e8;
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
    for (int i = 0; i < primes.size(); i+=100)
    {
        cout<<primes[i]<<endl;
    }
    

}