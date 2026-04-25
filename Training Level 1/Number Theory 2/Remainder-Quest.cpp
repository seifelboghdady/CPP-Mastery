#include <bits/stdc++.h>
#define int long long
using namespace std;

int add(int a, int b, int m){
    return (a%m + b%m)% m;
}
int mul(int a, int b, int m){
    return (a%m * b%m)%m;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string a; cin>>a;
    int b; cin>>b;
    int rem =0, ten=1;
    for (int i = a.size()-1; i >0; --i)
    {
        int digit = a[i]-'0';
        rem= add(rem, digit*ten, b);
        ten = mul(ten, 10, b);
    }
    cout<<rem;
}