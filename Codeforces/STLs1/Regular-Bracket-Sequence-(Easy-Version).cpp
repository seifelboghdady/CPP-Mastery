#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack <char> s;
    string input; cin>>input;
    bool is_valid = true;
    for (int i = 0; i < input.length(); i++)
    {
        if(input[i]== '('){
            s.push('(');
        }else{
            if(!s.empty())
                s.pop();
            else{
                is_valid = false;
                break;
            }
        }

    }
    if (is_valid && s.empty())
    {
        /* code */
        cout<<"Yes\n";
    }else
        cout<<"No\n";
}