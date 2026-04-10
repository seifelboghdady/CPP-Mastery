#include <bits/stdc++.h>

using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin>>a[i];
    long long sum = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push(a[i]);
        sum+=a[i];
        if(sum<0){
            sum-= pq.top();
            pq.pop();
        }

    }
    cout<<pq.size();
    
}