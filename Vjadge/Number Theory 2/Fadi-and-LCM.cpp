#include <bits/stdc++.h>
#define int long long
using namespace std;

/* Primility Check - prime factorization - divisors O(sqrt(N)) */
 
vector<int> getDivisors(int n){
    vector<int> divs;
    for(int d = 1; d * d <= n; ++d){
        if(n % d == 0) {
            divs.push_back(d);
            if(d != n / d) divs.push_back(n / d);
        }
    }
    return divs;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vector<int> divs = getDivisors(n);
    
    int mx = n+1;
    int ansA=-1, ansB=-1;
    for (auto a : divs)
    {
        int b = n/a;
        if(gcd(a,b)==1 && mx > max(a,b)){
            mx = max(a,b);
            ansA = a, ansB = b;
        }
    }
    cout<<ansA<<" "<<ansB;
    
}