#include <bits/stdc++.h>
using namespace std;

const int MAX = 200000;

vector<bool> isPrime(MAX + 1, true);
vector<int> primes;

void sieve() {
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= MAX; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX; j += i)
                isPrime[j] = false;
        }
    }

    for (int i = 2; i <= MAX; i++)
        if (isPrime[i])
            primes.push_back(i);
}

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

bool isprime(int n){
    if(n<2){
        return false;
    }
    for (int i = 0; i*i < n; i++)
    {
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for ( auto prime : primes)
        {
            
        }
        
        
        
    }

}