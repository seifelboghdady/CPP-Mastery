#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k; cin>>k;

    int cnt9 = k/9;
    int rem = k%9;

    if(rem!=0){
        cout<<rem;
        
    }
    for (int i = 0; i < cnt9; i++)
    {
        cout<<9;
    }

}