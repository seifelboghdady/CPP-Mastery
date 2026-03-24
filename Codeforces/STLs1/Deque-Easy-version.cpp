#include <iostream>
#include <deque>

using namespace std;

int main(){
    deque <int> de;
    int q; cin>>q;
    while (q--)
    {
        /* code */
        string op; cin>>op;
        if (op=="push_back")
        {
            /* code */
            int num; cin>>num;
            de.push_back(num);
        }else if(op=="push_front"){
            int num; cin>>num;
            de.push_front(num);
        }else if (op == "pop_front")
            de.pop_front();
        else if (op == "pop_back")
            de.pop_back();
        else if (op == "front")
            cout<<de.front()<<"\n";
        else if (op == "back")
            cout<<de.back()<<"\n";
        else if (op == "print")
        {
            int x; cin>>x;
            cout<<de[x-1]<<"\n";
        }
    }
}