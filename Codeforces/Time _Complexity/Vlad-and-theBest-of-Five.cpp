#include <iostream>
using namespace std;

int main(){
    int t; cin>>t;
    string arr[t];
    for (int i = 0; i < t; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < t; i++)
    {
        int cta = 0, ctb = 0;
        for (int j = 0; j < 5; j++)
        {
            if(arr[i][j]=='A') cta ++;
            else ctb ++;
            
        }
        if(cta>ctb){
            cout<<'A'<<endl;
        }else{
            cout<<'B'<<endl;
        }
        
    }
    
    
}