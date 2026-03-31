#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s; cin>>s;
    vector <int> qu(s);
    for (int i = 0; i < s; i++)
    {
        /* code */
        cin>>qu[i];
    }
    sort(qu.begin(), qu.end());
    long long sum = 0;
    int counter = 0;
    for (int i = 0; i < s; i++)
    {
        /* code */
        if(sum <= qu[i]){
            counter++;
            sum+= qu[i];
        }
    }
    cout<<counter;
    
}