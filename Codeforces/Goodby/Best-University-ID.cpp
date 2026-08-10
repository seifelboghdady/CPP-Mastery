#include <bits/stdc++.h>
#define int long long
using namespace std;

const int LIM = 1e4 + 5;
vector<int> primesList;
bool isComposite[LIM];

void sieve(){
    for(int i = 2; i < LIM; i++){
        if(!isComposite[i]){
            primesList.push_back(i);
            for(int j = i*i; j < LIM; j += i)
                isComposite[j] = true;
        }
    }
}

vector<int> primeFactorization(int n){
 
    vector<int> ans;
    for (int p : primesList) {
        if(p * p > n) break;
        while(n % p == 0){
            ans.push_back(p);
            n /= p;
        }
    }
 
    if(n != 1) ans.push_back(n);
 
    return ans;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vector<string> names(n);
    vector<int>id(n);
    for (int i = 0; i < n; i++)
    {
        cin>>names[i]>>id[i];
    }
    sieve();
    int mx_idx =0;
    int mid =0;
    for (int i = 0; i < n; i++)
    {
        
        for(auto & prime : primeFactorization(id[i])){
            
            if(mid< prime){
                mid = prime;
                mx_idx = i;
            }
        
        }

    }
    cout<<names[mx_idx];
    
    

}