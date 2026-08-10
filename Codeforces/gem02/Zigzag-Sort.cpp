#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vector<int>nums(n);
    for (int i = 0; i < n; i++)
    {
        cin>>nums[i];
    }

    sort(nums.begin(), nums.end());
    
    vector<int>arr(n);
    int bgn = n-1;
    for (int i = 0; i < n; i+=2)
    {
        arr[i]=nums[bgn];
        bgn--;
    }
    for (int i = 1; i < n; i+=2)
    {
        arr[i] = nums[bgn];
        bgn--;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    

}