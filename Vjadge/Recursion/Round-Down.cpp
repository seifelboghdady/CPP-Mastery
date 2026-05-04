#include <bits/stdc++.h>
using namespace std;

string Round(string s, int i=0){
    if(i == s.size()||s[i]=='.' ) return"";


    return s[i]+Round(s, i+1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin>>s;

    cout<<Round(s);
}