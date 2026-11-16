#include <bits/stdc++.h>
#define ll long long
using namespace std;

// vector<int> a ;

struct Node {
    int ans = 0;
    int open = 0;
    int close = 0;
};
vector<Node> seg;
string a;

Node merge(Node left, Node right) {
    Node res;
    int match = min(left.open, right.close);
    
    res.ans = left.ans + right.ans + match;
    res.open = left.open + right.open - match;
    res.close = left.close + right.close - match;
    
    return res;
}

void build(int node, int l, int r){
    if(l==r){
        if(a[l]=='('){
            seg[node]={0,1,0};
            return ;
        }else{
            seg[node]={0,0,1};
            return; 
        }
    }

    int mid = (l+r)/2;
    build(node *2, l, mid);
    build(node * 2 + 1, mid+1, r);

    seg[node] = merge(seg[node * 2] , seg[node *2 +1]);
}

Node query(int node, int l, int r, int ql, int qr){
    //no overlap
    if(r<ql||l>qr){
        return {0, 0, 0};
    }
    //complete
    if(ql<=l && r<=qr){
        return seg[node];
    }
    //partial
    int mid = (l+r)/2;
    Node left = query(node*2, l, mid, ql, qr);
    Node right = query(node*2+1, mid+1, r, ql, qr);
    
    return merge(left,right);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // string a; 
    cin>>a;
    int n = a.length();
    seg.assign(4 * n,{0,0,0});
    build(1,0,n-1);
    int q; cin>>q;
    while (q--)
    {
        int l,r; cin>>l>>r;
        cout<<((query(1, 0, n-1, l-1, r-1)).ans) * 2<<'\n';
    }
    

}