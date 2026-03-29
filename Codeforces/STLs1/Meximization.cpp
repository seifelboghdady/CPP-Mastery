#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    
    while(t--){
        int s; cin>>s;
        vector <int> a(s);
        vector <int> freq(101,0);
        for (int i = 0; i < s; i++)
        {

            cin>>a[i];
            freq[a[i]]++;
        }
        vector <int> result;
        for (int i = 0; i < 101; i++)
        {
            if (freq[i] > 0)
            {
                result.push_back(i);
                freq[i]--;
            }
            /* code */
        }
        for (int i = 0; i < 101; i++)
        {
            while(freq[i]>0)
            {
                result.push_back(i);
                freq[i]--;
            }
        }
        for (int i = 0; i < s; i++)
        {
            cout<<result[i]<<" ";
        }
        cout<<"\n";
    }
}