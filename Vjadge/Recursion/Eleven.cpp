#include <bits/stdc++.h>
using namespace std;

string letter(int n, int i=1, int f1 = 1, int f2 = 2){
    if(i>n) return "";
    char s;
    if(i==f1){
        s = 'O';
        return s+letter(n, i+1, f2, f1+ f2) ;
    }else{
        s='o';
        return s+letter(n, i+1, f1, f2) ;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    cout<<letter(n);

}