#include <bits/stdc++.h>

using namespace std;

int add(int a, int b, int m){
    return (a%m+b%m)%m;
}

int mul(int a, int b, int m){
    // return (a*b)%m;
    return (a%m+b%m)%m;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //example Clock
    cout<<add(2, 13, 12);

}