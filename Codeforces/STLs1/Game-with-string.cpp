#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string input; cin>>input;
    stack <char> st;
    int turn =0;
    for (int i = 0; i < input.size(); i++)
    {
        if (st.empty()||input[i] !=st.top())
        {
            st.push(input[i]);
        }else{
            st.pop();
            turn++;
        }
    }
    if (turn%2==0)
    {
        cout<<"No";
    }else
        cout<<"Yes";
}