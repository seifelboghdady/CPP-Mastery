#include <bits/stdc++.h>
#define int long long
using namespace std;

/* Multiples loop */
const int N = 2e5 + 1;
vector<int> divs[N];
int cnt[N];

void gen(){
    for (int i = 1; i < N; ++i) {
        for (int j = i; j < N; j += i) {
            // i is a divisor of j
            divs[j].push_back(i);
            cnt[j]++;
        }
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q; cin>>q;
    gen();
    while (q--)
    {
        int n; cin>>n;
        int turn =0;
        if((cnt[n]+n)%2==0){
            if(n==1){
                cout<<"mastermei"<<'\n';
                
            }else{

                cout<<"the greatest"<<'\n';
            }
        }else{
            cout<<"mastermei"<<'\n';
        }
    }
    

}
// mastermei
// the greatest
// mastermei
// mastermei
// the greatest
// the greatest
