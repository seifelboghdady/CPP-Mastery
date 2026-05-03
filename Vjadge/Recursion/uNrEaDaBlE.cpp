#include <bits/stdc++.h>
using namespace std;

bool hard_to_read(string s, int i=0){
    if(i>=s.size()) return true;
    if(i%2==0){
        if(!(s[i]>= 'a' && s[i]<='z')) return false;
    }else{
        if(!(s[i]>= 'A' && s[i]<='Z')) return false;
    }
    return hard_to_read(s,i+=1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin>>s;

    if(hard_to_read(s))
        cout<<"Yes";
    else
        cout<<"No";

}