#include <bits/stdc++.h>
using namespace std;

vector<int> a ;
struct Node{
    int g;
    int cnt;
};
vector<Node> seg;

Node merge(Node left, Node right){
    int new_g = gcd(left.g, right.g);
    int cnt=0;

    if(new_g == left.g){
        cnt += left.cnt;
    }
    if(new_g == right.g){
        cnt += right.cnt;
    }

    return {new_g, cnt};
}

void build(int node, int l, int r){
    if(l==r){
        seg[node] = {a[l], 1};
        return;
    }

    int mid = (l+r)/2;
    build(node *2, l, mid);
    build(node * 2 + 1, mid+1, r);

    seg[node] = merge(seg[node * 2] , seg[node *2 +1]);
}

Node query(int node, int l, int r, int ql, int qr){
    //no overlap
    if(r<ql||l>qr){
        return {0,0};
    }
    //complete
    if(ql<=l && r<=qr){
        return seg[node];
    }
    //partial
    int mid = (l+r)/2;
    Node left = query(node*2, l, mid, ql, qr);
    Node right = query(node*2+1, mid+1, r, ql, qr);
    return merge(left, right);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    a.assign(n, 0);
    seg.assign(4 * n, {0,0});
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    build(1, 0, n-1);
    int t; cin>>t;
    while (t--)
    {
        int l, r; cin>>l>>r;
        cout<<(r-l+1)-query(1, 0, n-1, l-1, r-1).cnt<<'\n';
    }
    

}