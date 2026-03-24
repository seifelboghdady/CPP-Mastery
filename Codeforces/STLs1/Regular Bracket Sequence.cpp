#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    stack <char> s;
    string input; cin>>input;
    int maxlength = 0;
    for (int i = 0; i < input.length(); i++)
    {
        if(input[i]== '('){
            s.push('(');
        }else{
            if(!s.empty()){
                s.pop();
                maxlength+=2;
            }

        }

    }
    cout<<maxlength;
}