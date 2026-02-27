#include <iostream>
using namespace std;

int main(){
    int t; cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n; cin>>n;
        int freq[n+1];
        for (int i = 0; i <= n; i++) {
            freq[i] = 0;
        }
        int result =-1;
        for (int j = 0; j < n; j++)
        {
            int ele; cin>>ele;
            freq[ele]++;

            if(freq[ele]>=3){
                result = ele;
            }

        }

        cout<<result<<endl;
    }
    


}