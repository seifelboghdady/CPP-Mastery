#include <iostream>
#include <deque>
#include <vector>


using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>> t;
    while (t--)
    {
        int size;
        cin>>size;
        vector <int> vec(size);
        deque <int> de;
        for (int i = 0; i < size; i++)
        {
            cin>>vec[i];
        }
        for (int i = 0; i < size; i++)
        {
            if (!de.empty())
            {
                /* code */
                if (vec[i]<de.front())
                {
                    de.push_front(vec[i]);
                }else{
                    de.push_back(vec[i]);
                }
            }else{
                de.push_front(vec[i]);
            }
        }
        for (int i = 0; i < size; i++)
        {
            /* code */
            cout<<de.front()<<" ";
            de.pop_front();
        }
        cout<<"\n";
    }
}