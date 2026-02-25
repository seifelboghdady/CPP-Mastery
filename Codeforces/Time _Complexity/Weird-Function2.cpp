#include <iostream>
using namespace std;

string f(bool state, string s1, string s2){
    if (state){
        return s1 + s2;
    }else{
        return s2 + s1;
    }
}


int main(){
    //take s1 , s2
    string s1, s2; cin>>s1>>s2;
    string output = f(1,f(1,f(0,s1,s2)+s1,s2),s1+f(0,s1+s2,f(1,s2,s1)));
    cout<<output;

}

