#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, k; cin>>n>>k;
    long long arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
        arr[i]+=arr[i-1];
    }
    long long sum = 0;
    for (int i = k; i <= n; i++)
    {
        long long r =i, l=r-k+1;
        sum = max(sum, arr[r]-arr[l-1]);
        
    }
    cout<<sum;
    
    
}