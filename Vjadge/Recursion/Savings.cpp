#include <bits/stdc++.h>
using namespace std;

int saving(int n, int i=1, int sum =0){
    if(sum>=n) return i-1;

    return saving(n, i+1, sum+i);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    cout<<saving(n);

}