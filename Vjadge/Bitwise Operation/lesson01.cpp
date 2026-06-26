#include <bits/stdc++.h>
using namespace std;


int getbit(int a, int b){
    return (a >> b) & 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cout<<getbit(12,3)<<endl;

}