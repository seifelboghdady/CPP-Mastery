#include <bits/stdc++.h>
using namespace std;

int fib(int a){
    if(a==0) return 0;
    if(a==1) return 1;
    return fib(a-1)+fib(a-2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    cout<<fib(n);

}