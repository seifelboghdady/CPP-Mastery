#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while (t--)
    {
        /* code */
        int n; cin>>n;
        vector <int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        //3 9 4 6 7 5
        int counter=0;
        int min_num = 2*10e6;
        for (int i = n-1; i>= 0; i--)
        {
            if (min_num<v[i])
            {
                counter++;
            }else{
                min_num = v[i];
            }
            
        }
        cout<<counter<<'\n';
    }
    
}