#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long
using namespace std;
using namespace __gnu_pbds;
typedef tree<int , null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> Ordered_Set; // find_by_order : element at index i

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while (t--)
    {
        int n, k; cin>>n>>k;
        vector<int>a(n+1);
        vector<int> pre(n+1);
        for (int i = 1; i <=n ; i++)
        {
            cin>>a[i];
            if(i==1){
                pre[i] = a[i];
            }else{
                pre[i] = a[i] + pre[i-1];
            }
        }
        map<int, int> frql, frqr;
        Ordered_Set os;
        int cnt =0;
    
        for (int i = 0; i <= n; i++)
        {
            pre[i] = pre[i] - k* i;
            cnt += os.order_of_key(pre[i]+1);
            os.insert(pre[i]);
            frql[pre[i]]++; 
        }

        int mx =cnt;
        for (int i = n; i>0 ; i--)
        {
            frql[pre[i]]--; frqr[pre[i]+1]++;
            cnt += frql[pre[i]+1];
            cnt -= frqr[pre[i]];
            mx = max(mx,cnt);
        }
        cout<<mx<<endl;
    }
    

}