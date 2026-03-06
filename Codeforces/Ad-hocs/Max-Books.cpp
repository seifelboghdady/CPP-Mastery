#include <iostream>
#include <algorithm>
using namespace std;

int arr[100001]; 
long long pre[100001];
int main(){
    int n, k; cin>>n>>k;
    
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
        pre[i]=pre[i-1]+ arr[i];
    }

    int l,r ;
    long long ans =0;
    for ( l = 1, r = k; r <= n; ++r, ++l)
    {
        ans = max(ans, pre[r]-pre[l-1]);
    }
    cout << ans;
}