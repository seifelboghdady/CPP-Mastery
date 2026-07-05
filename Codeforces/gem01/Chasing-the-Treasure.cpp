#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int b, h,l;
    cin>>b>>h>>l;

    double areahex = ((3 * sqrt(3)) / 2) * powf(l,2);
    
    double arearec = b * h;

    double prob = areahex / arearec;
    cout<< fixed << setprecision(10) <<prob;

}