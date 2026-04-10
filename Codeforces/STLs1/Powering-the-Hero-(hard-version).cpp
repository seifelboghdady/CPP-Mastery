#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while (t--)
    {
        priority_queue<int> pq;
        int n; cin>>n;
        vector <int> a(n);
        long long sum =0;
        for (int i = 0; i < n; i++)  cin>>a[i];

        for (int i = 0; i < n; i++)
        {
            if(a[i]==0 && !pq.empty()){
                sum +=pq.top();
                pq.pop();
            }else if(a[i] != 0){
                pq.push(a[i]);
            }
        }
        cout<<sum<<'\n';
        
    }
    

}