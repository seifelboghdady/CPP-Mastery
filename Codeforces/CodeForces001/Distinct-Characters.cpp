#include <bits/stdc++.h>
#define ll long long
using namespace std;

// vector<int> a ;
string a;
vector<int> seg;

int merge(int left, int right){
    return (left|right);
}

void build(int node, int l, int r){
    if(l==r){
        seg[node] = 1<<(a[l]-'a');
        return;
    }

    int mid = (l+r)/2;
    build(node *2, l, mid);
    build(node * 2 + 1, mid+1, r);

    seg[node] = merge(seg[node * 2] , seg[node *2 +1]);
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
    int left = query(node*2, l, mid, ql, qr);
    int right = query(node*2+1, mid+1, r, ql, qr);
    return merge(right,left);
}

void update(int node, int l, int r, int idx, char val) {

    if (l == r) {
        seg[node] = 1 << (val - 'a');
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

    seg[node]= merge(seg[node * 2] , seg[node * 2 + 1]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>a;
    int q; cin>>q;
    int n = a.length();
    seg.assign(4 * n, 0);
    build(1, 0, n-1);
    while (q--)
    {
        int op; cin>>op;
        if(op==1){
            //update
            int pos ; char c; cin>>pos>>c;
            update(1, 0, n-1, pos-1, c);
        }else{
            //query
            int l,r; cin>>l>>r;
            cout<<__builtin_popcount(query(1, 0, n-1, l-1, r-1))<<'\n' ;
            
        }
    }
    
    

}