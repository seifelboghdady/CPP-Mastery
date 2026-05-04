#include <bits/stdc++.h>
using namespace std;

const int M = 1e9+7;

int expon(int a, int b){
    if(b==0) return 1;
        
    if(b%2==0){
        return a*a*expon(a,b/2);
    }else{
        return a*expon(a,b-1);
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){
        int a, b; cin>> a>>b;

    }

}