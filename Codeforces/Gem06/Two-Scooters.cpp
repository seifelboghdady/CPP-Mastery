#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, c1, c2; cin>>t>>c1>>c2;
    int w= (t/60)*60*c1;
    
    int y = ceil(t * c2/ 100.0 )*100 ;
    cout<<min(w, y);


}