#include <iostream>
#include <climits>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int n, k; cin>>n>>k;
    long long arr[n+1];
    for (int i = 1; i <= n; i++)
    {
         cin>>arr[i];
    }
    
    for (int i = 1; i <= n; i++)
    {
        arr[i]+=arr[i-1];
    }
    long long minsum = LLONG_MAX;
    int index = 1;
    for (int i = 0; i <= n-k; i++)
    {
        int r = i; int l = k+i;
        if(arr[l]-arr[r] < minsum)
        {
            minsum = arr[l]-arr[r];
            index = r+1;
        }
    }
    cout<<index;
}