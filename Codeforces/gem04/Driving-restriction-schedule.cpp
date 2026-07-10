#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vector<int> t(n);
    for (int i = 0; i < n; i++)
    {
        cin>>t[i];
    }

    int total =0;
    int start = 5;
    for (int i = 0; i < n; i++)
    {
        total += t[i];
        double clock = total/60.0;
        // cout<<clock<<" ";
        
        if(clock+start>7 && clock+start<= 10){
            total+=180;
        }
        if(clock+start>17 && clock+start<= 20){
            total +=180;
        }
        
    }
    // cout<<endl;
    cout<<total;

}