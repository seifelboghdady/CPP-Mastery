#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> a ;
vector<ll> seg;

void build(int node, int l, int r){
    if(l==r){
        seg[node] = a[l];
        return;
    }

    int mid = (l+r)/2;
    build(node *2, l, mid);
    build(node * 2 + 1, mid+1, r);

    seg[node] = seg[node * 2] + seg[node *2 +1];
}

ll query(int node, int l, int r, int ql, int qr){
    //no overlap
    if(r<ql||l>qr){
        return 0;
    }
    //complete
    if(ql<=l && r<=qr){
        return seg[node];
    }
    //partial
    int mid = (l+r)/2;
    ll left = query(node*2, l, mid, ql, qr);
    ll right = query(node*2+1, mid+1, r, ql, qr);
    return right+left;
}

void update(int node, int l, int r, int idx, int val) {

    if (l == r) {
        seg[node] = val;
        return;
    }

    int mid = (l + r) / 2;

    // Complete the rest...
    if(idx<=mid){
        //go to left
        update(node*2, l, mid, idx, val);
    }else{
        //go to right
        update(node*2+1, mid+1, r, idx, val);
    }

    seg[node]= seg[node * 2] + seg[node * 2 + 1];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin>>n>>q;
    a.assign(n,0);
    seg.assign(4*n,0);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    build(1,0,n-1);
    for (int i = 0; i < q; i++)
    {
        int op; cin>>op;
        if(op==1){
            int k, v; cin>>k>>v;
            update(1, 0, n-1, k-1, v);
        }else{
            int a,b; cin>>a>>b;
            cout<<query(1, 0, n-1, a-1, b-1)<<'\n';
        }
    }
    
    

}