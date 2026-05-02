#include <bits/stdc++.h>
#define int long long
using namespace std;


int sumDigitRecurtion(int a){
    if(a==0) return 0;
    return a%10 + sumDigitRecurtion(a/10);
}

int superDigit(int x){
    if(x<10) return x;
    int sum = sumDigitRecurtion(x);
    return superDigit(sum);
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin>>s;
    int k; cin>>k;

    int sum =0;
    for (auto c : s)
    {
        sum += c-'0';
    }
    cout<<superDigit(sum*k);

}