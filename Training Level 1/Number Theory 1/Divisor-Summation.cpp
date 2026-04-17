#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while (t--)
    {
        int x; cin>>x;
        vector<int> divisors(x);
        for(int i =1; i*i<=x; i++){
            if(x%i==0){
                divisors.push_back(i);
                if(i*i!=x){
                    divisors.push_back(x/i);
                }
            }
        }
        long long sum = 0;
        for (int i = 0; i < divisors.size(); i++)
        {
            sum+=divisors[i];
        }
        cout<<sum-x<<'\n';
        
    }
    

}