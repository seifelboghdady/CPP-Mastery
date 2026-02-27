#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    int t ; cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n ; cin>>n;
        string s; cin>>s;

        stack <char> st;
        for (int j = 0; j < n; j++)
        {
            if(!st.empty() && st.top() == s[j]){
                st.pop();
            }else{
                st.push(s[j]);
            }
        }
        if(st.empty())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    
}
