#include <bits/stdc++.h>
using namespace std;

int parent[50000];
int sz[50000];

void init(int n){
    for (int i = 0; i < n; i++)
    {
        parent[i]=i;
        sz[i]=1;
    }
    
}

int findLeader(int n){
    if(parent[n]==n){
        return n;
    }
    return findLeader(parent[n]);
}

int unit(int a, int b) {
    a = findLeader(a);
    b = findLeader(b);

    if (a == b) {
        return 0;
    }

    if (sz[a] < sz[b])
        swap(a, b);

    parent[b] = a;
    sz[a] += sz[b];
    return 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    

}