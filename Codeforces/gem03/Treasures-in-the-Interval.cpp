#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N,Q,M; cin>>N>>Q>>M;
    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin>>a[i];
    }
    while (Q--)
    {
        int L,R,d; cin>>L>>R>>d;
        for (int i = L-1; i <= R-1; i++)
        {
            a[i]+=d;
        }
        
    }
    sort(a.rbegin(), a.rend());
    while (M--)
    {
        int k; cin>>k;
        cout<<a[k-1]<<"\n";
    }
    
    
    

}