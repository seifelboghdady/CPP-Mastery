#include <iostream>
using namespace std;

int main(){
    int n, q; cin>>n>>q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < q; i++)
    {
        int ct =0;
        int l, r, x; cin>>l>>r>>x;
        for (int j = l-1; j<r; j++)
        {
            if(x==arr[j]) ct++;
        }
        cout<<ct<<endl;
        
    }
}