#include <bits/stdc++.h>
using namespace std;


vector<int> getDivisors(int n){
    vector <int> divisors;
    for (int i = 1; i <= n; i++)
    {
        if(n%i==0){
            divisors.push_back(i);
        }
    }
    return divisors;
}

int isprime(int n){
    if(n==1) return false;
    for (int i = 2; i*i <= n; i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}

vector<int> prime_Factorization(int n){
    vector<int> ans;
    for (int i = 2; i <= n; i++)
    {
        while(n%i==0){
            ans.push_back(i);
            n /= i;
        }
    }
    return ans;
}

vector<int> prime_factorization_sqrt(int n){
    vector<int> ans;
    for (int i = 2; i*i <= n; i++)
    {
        while (n%i==0)
        {
            ans.push_back(i);
            n/=i;
        }
    }
    if(n!=1) ans.push_back(n);
    return ans;
    
}
const int n = 1e6;
vector<int> divs[n];
int cnt[n];
int isPrime[n];

vector<int>primes;
void gen(){
    for (int i = 2; i < n; i++) isPrime[i]=1;
    for (int i = 2; i < n; i++)
    {
        if(isPrime[i]==1){
            primes.push_back(i);
            for (int j = i*i; j < n; j+=i)
            {
                isPrime[j]=0;
            }
        }
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // vector<int> divs= getDivisors(12);
    // for(auto d : divs){
    //     cout<<d<<'\n';
    // }
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout<<i<<" "<< isprime(i)<<'\n';
    // }
    //vector<int> prime = prime_Factorization(n);
    // vector<int> prime = prime_factorization_sqrt(n);
    // set<int> distPrime;
    // for(auto d : prime){
        //     distPrime.insert(d);
        // }
        // for(auto d : distPrime){
            //     cout<<d<<'\n';
            // }
            // int x; cin>>x;
            // for (int i=1; i<=x;i++ )
            // {
                //     cout<<i<<" "<<isPrime[i]<<endl;
                // }
    gen();
    for (int i = 0; i < 100; i++)
    {
        cout<<primes[i]<<'\n';
    }
}
