#include <iostream>
using namespace std;

int f(int x){
    return 2*x+3;
}

int main(){
    //take x
    int x; cin>>x;
    int output = f(f(f(x))) + 2 * f(x * f(x));
    cout<<output;
}

