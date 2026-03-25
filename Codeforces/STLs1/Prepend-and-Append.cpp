#include <iostream>
#include <deque>

using namespace std;

int main(){
    int t; cin>>t;
    // deque<char> de;
    while (t--)
    {
        /* code */
        int l; cin>>l;
        string input; cin>>input;
        int currentlen =l;
        for (int i = 0; i < l; i++)
        {
            /* code */
            int right = l-i-1; int left = i;
            if (input[left]!= input[right]&&right>left)
            {
                /* code */
                currentlen-=2;
            }else{
                break;
            }
            
        }
        cout<<currentlen<<endl;
        
    }
    
}