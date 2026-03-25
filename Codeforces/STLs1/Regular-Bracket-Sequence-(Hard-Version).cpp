#include <iostream>
#include <stack>


using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    stack <char> s;
    string input; cin>>input;
    bool is_valid = true;
    for (int i = 0; i < input.length(); i++)
    {
        if(input[i]== '('||input[i]=='['||input[i]=='{'||input[i]=='<'){
            s.push(input[i]);
        }else{
            if(!s.empty())
                if ( (input[i] == ')' && s.top() == '(') || 
                    (input[i] == ']' && s.top() == '[') ||
                    (input[i] == '>' && s.top() == '<') ||
                    (input[i] == '}' && s.top() == '{') )
                {
                    /* code */
                    s.pop();
                }else{
                   is_valid = false;
                    break; 
                }
                
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