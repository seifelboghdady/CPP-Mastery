#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    queue <int> qe;
    while (t--)
    {
        int id, num; cin>>id>>num;
        if (id == 1)
        {
            /* code */
            qe.push(num);
        }else if (id == 2)
        {
            /* code */
            if (qe.empty())
            {
                /* code */
                cout<<"no\n";
            }else{
                int front = qe.front();
                qe.pop();
                if (front == num)
                    cout<<"yes\n";
                else 
                    cout<<"no\n";
            }

        }
        
        
    }
    
}