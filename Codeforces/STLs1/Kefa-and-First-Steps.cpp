#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s; cin>>s;
    vector <int> v(s);
    for (int i = 0; i < s; i++)
    {
        /* code */
        cin>>v[i];
    }
    int counter =1;
    int max_counter =0;
    for (int i = 1; i < s; i++)
    {
        /* code */
        if (v[i-1]<=v[i])
        {
            counter++;
        }else{
            if (max_counter<counter)
            {
                max_counter = counter;
            }
            counter=1;
        }
    }
    if (max_counter<counter)
    {
        max_counter = counter;
    }
    cout<<max_counter;  
}