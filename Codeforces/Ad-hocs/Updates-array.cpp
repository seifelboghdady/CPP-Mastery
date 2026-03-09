#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[100000];
    int updates[100000];
    for (int i = 1; i <= n; ++i)
    {
        cin>>arr[i];
    }
    int q; cin>>q;
    while (q--)
    {
        int pos, val; cin>>pos>>val;
        updates[pos]+=val;
    }
    for (int i = 1; i <= n; ++i)
    {
        updates[i]+= updates[i-1];
    }

    for (int i = 1; i <= n; ++i)
    {
        cout<<arr[i]+updates[i]<<' ';
    }
    
    
    
    
    
}

/*
5
5 2 4 -1 3
4
3 2
1 -1
4 2
3 1

output
4 1 6 3 7

*/