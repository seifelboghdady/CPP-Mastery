#include <iostream>
using namespace std;

void solve(){
    int n; cin>>n;
    int arr[n+1];
    int freq[n+1]={0};
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
        freq[arr[i]]++;
    }
    
    if (arr[1] > n) 
    {
        cout << "NO\n";
        return;
    }
    
    for (int i = n-1; i >= 1; i--) {
        freq[i]+=freq[i+1];
    }

    for (int i = 1; i <= n; i++)
    {
        if(arr[i]!= freq[i]){
            cout<<"NO\n";
            return;
        }
    }
    cout << "YES" << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int t; cin>>t;
    while (t--)
    {
        solve();
    }
}