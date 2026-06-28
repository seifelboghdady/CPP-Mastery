#include <bits/stdc++.h>
using namespace std;


int getbit(int a, int b){
    int mask = 1<<b;
    if((a & mask)== 0){
        return false;
    }else{
        return true;
    }
}

int setbit(int a, int b){
    return a|(1<<b);
}

int clearbit(int a, int b){
    return a & ~(1<<b);
}

int toggle(int a, int b){
    return a ^ (1<<b);
}

int ispowertwo(int a){
    return !(a& (a-1));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // cout<<(~5);
    cout<<getbit(5, 2)<<endl;
    cout<<setbit(6,3)<<endl;
    cout<<clearbit(6,2)<<endl;

    int n ;cin>>n;
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        ans^=x;
    }
    cout<<"the number is : "<<ans<<endl;

    int x; cin>>x;
    //To count bit
    int count =0;
    for (int i = 0; i < 64; i++)
    {
        count += (x>>i) & 1;
    }
    cout<<"count ones : "<<count<<endl;
    cout<<"this from built in func : "<< __builtin_popcount(22)<<endl;
    cout<<"Is power of two : "<<ispowertwo(16)<<endl;

    // find number subset sum of element = x
    int size,z; cin>>size>>z;
    vector<int> nums(size);
    for (int i = 0; i < size; i++)
    {
        cin>>nums[i];
    }
    int answer=0;
    for (int mask = 0; mask <(1<<n); mask++)
    {
        int cur =0;
        for (int i = 0; i < n; i++)
        {
            if(mask & (1<<i)){
                cur += nums[i];
            }
            if(cur==z){
                answer++;
            }

        }
        
    }
    cout<<answer<<endl;
    
}