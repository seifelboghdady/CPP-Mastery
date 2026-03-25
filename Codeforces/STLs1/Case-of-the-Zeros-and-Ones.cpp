#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    stack <char> st;
    int l; cin>>l;
    string input; cin>>input;
    int counter=0;
    for (int i = 0; i < l; i++)
    {
        /* code */
        if (st.empty()||st.top() == input[i] )
        {
            /* code */
            st.push(input[i]);
        }else{
            
            st.pop();
            counter+=2;
        }
        
    }
    cout<<l-counter;
    
}