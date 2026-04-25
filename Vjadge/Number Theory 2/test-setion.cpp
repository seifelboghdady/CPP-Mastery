#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

const int M = 1e9 + 7;
int add(int a, int b, int m){
    return (a%m+b%m)%m;
}

int mul(int a, int b, int m){
    // return (a*b)%m;
    return (a%m+b%m)%m;
}

int fast_power(int a, int b){
    a %=M;
    int ans=1;
    while(b)
    {
        if(b&1){
            ans = (ans*a) %M;
        }
        a = (a*a) %M;
        b >>= 1;
    }
    return ans;
}

int my_gcd_normal(int a, int b){
    if(a>b) swap(a, b);
    while(a!=0){
        b= b-a;
        if(a>b) swap(a, b);
    }
    return b;
}
//this take O(log n)
int gcd_optimal(int a, int b){
    if(a>b) swap(a,b);
    while(a){
        b %=a;
        swap(a,b);
    }
    return b;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //example Clock
    // cout<<add(2, 13, 12)<<endl;
    //example fast_power
    // cout<<fast_power(123, 123)<<endl;
    // cout<<13%9<<endl;
    cout<<my_gcd_normal(12, 18)<<endl;
    cout<<gcd_optimal(12, 18);

}