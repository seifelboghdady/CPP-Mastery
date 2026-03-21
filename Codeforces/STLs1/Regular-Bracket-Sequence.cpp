#include <iostream>
#include <stack>
#define Sonic ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
// #define int long long

using namespace std;

int main(){
    Sonic;
    string input; cin>>input;
    stack <char> st;
    for (int i = 0; i < input.size(); i++)
    {
        if(input[i]=='('){
            st.push(input[i]);
        }else{
            if (!st.empty()){
                st.pop();
            }else{
                cout<<"No";
                return 0;
            }
            
        }
    }
    if (st.empty()){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}