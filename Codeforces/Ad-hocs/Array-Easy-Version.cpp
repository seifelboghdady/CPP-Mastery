#include <iostream>
using namespace std;


int main(){
    int n; cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int q; cin>>q;
    for (int i = 0; i < q; i++)
    {
        int sum = 0;
        int l,r; cin>>l>>r;
        for (int j = l-1; j <r ; j++)
        {
            sum+=arr[j];
        }
        cout<<sum<<endl; 
    }
}