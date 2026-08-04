#include <bits/stdc++.h>
#define int long long
using namespace std;



signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string x; cin>>x;
    if(x[0]-'0'>1 || x[1] != '0'){
        cout<< stoll(x)- (int) powl(10, x.length()-1)<<(int)powl(10, x.length()-1);
    }else{
        cout<< stoll(x)- (int) powl(10, x.length()-2)<<(int)powl(10, x.length()-2);
    }

}