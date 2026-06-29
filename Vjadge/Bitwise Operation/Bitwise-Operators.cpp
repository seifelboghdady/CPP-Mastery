#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k; cin>>n>>k;
    int countand=0;
    int countor=0;
    int countxor=0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i+1; j <= n; j++)
        {
            if((i&j)<k and (i&j)>0){
                countand++;
            }
            if((i|j)<k and (i|j)>0){
                countor++;
            }
            if((i^j)<k and (i^j)>0){
                countxor++;
            }

        }

    }
    cout<<countand<<endl;
    cout<<countor<<endl;
    cout<<countxor<<endl;
}