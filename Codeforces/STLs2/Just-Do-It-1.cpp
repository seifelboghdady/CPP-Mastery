#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    vector<int> nums;
    while (t--)
    {
        int op; cin>>op;
        switch (op)
        {
            case 1:{
                int ele; cin>>ele;
                nums.push_back(ele);
                break;
            }
            case 2:{
                int val; cin>>val;
                auto it = find(nums.begin(), nums.end(), val);
                if(it != nums.end()){
                    nums.erase(it);
                }
                break;
            }
            case 3:{
                if(nums.size()==0){
                    cout<<"It is Just EMPTY"<<endl;
                }else{
                    int min = 1e9+1;
                    for (int i = 0; i < nums.size(); i++)
                    {
                        if(min>nums[i]){
                            min=nums[i];
                        }
                    }
                    cout<<min<<endl;
                }
                break;
            }
        }
    }
}