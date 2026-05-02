#include <bits/stdc++.h>
using namespace std;

long long f(int a){
    if(a==0) return 1;
    return a * f(a-1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    cout<<f(n);

}