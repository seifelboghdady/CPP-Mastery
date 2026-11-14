#include <bits/stdc++.h>
using namespace std;

vector<int> a ;
vector<int> seg;

int merge(int left, int right,bool isOod){

    if(isOod){
        return (left|right);
    }else{
        return (left ^ right);
    }
}

void build(int node, int l, int r, bool isOod){
    if(l==r){
        seg[node] = a[l];
        return;
    }

    int mid = (l+r)/2;
    build(node *2, l, mid, !isOod);
    build(node * 2 + 1, mid+1, r, !isOod);

    seg[node] = merge(seg[node * 2] , seg[node *2 +1], isOod);
}

// int query(int node, int l, int r, int ql, int qr, bool isOr){
//     //no overlap
//     if(r<ql||l>qr){
//         return INT_MAX;
//     }
//     //complete
//     if(ql<=l && r<=qr){
//         return seg[node];
//     }
//     //partial
//     int mid = (l+r)/2;
//     int left = query(node*2, l, mid, ql, qr, !isOr);
//     int right = query(node*2+1, mid+1, r, ql, qr, !isOr);
//     return merge(right,left, isOr);
// }

void update(int node, int l, int r, int idx, int val, bool isOr) {

    if (l == r) {
        seg[node] = val;
        return;
    }

    int mid = (l + r) / 2;

    // Complete the rest...
    if(idx<=mid){
        //go to left
        update(node*2, l, mid, idx, val, !isOr);
    }else{
        //go to right
        update(node*2+1, mid+1, r, idx, val, !isOr);
    }

    seg[node]= merge(seg[node * 2] , seg[node * 2 + 1], isOr);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin >> n>>m;
    int N = 1 << n;
    a.assign(N, 0);
    seg.assign(4*N, 0);
    for(int i=0;i<N;i++) cin>>a[i];
    build(1, 0, N - 1, n % 2 == 1);
    while (m--)
    {
        int p,b; cin>>p>>b;
        update(1, 0, N - 1, p - 1, b, n % 2 == 1);
        cout<<seg[1]<<'\n';
    }
    
    

}