#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int h,m; cin>>h>>m;

    int mint = (m+1)%60;
    int mint2 = (m+1)/60;
    // cout<<mint<<" "<<mint2<<endl;
    int hour = h + mint2  ;
    
    
    // cout<<24%12<<endl;
    if(hour>23)
        hour = hour%12;


    cout<<hour<<" "<<mint;

}