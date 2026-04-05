#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    
    int s; 
    while (cin>>s)
    {
        stack <int> st;
        queue <int> qe;
        priority_queue <int> pq;
    
        bool is_stack= true;
        bool is_queue= true;
        bool is_priority_queue= true;
        for (int i = 0; i < s; i++)
        {
            int op, x; cin>>op>>x;
            if (op==1)
            {
                st.push(x);
                qe.push(x);
                pq.push(x);
            }else if(op==2){
                //|| qe.front()==x || pq.top()==x
                if (!st.empty() && st.top()==x )
                {
                    st.pop();
                }else is_stack =  false;
                if (!qe.empty() && qe.front()==x )
                {
                    qe.pop();
                }else is_queue = false;
                if (!pq.empty() && pq.top()==x )
                {
                    pq.pop();
                }else is_priority_queue = false;
                
            }
            
        }
        int cnt = is_stack + is_queue + is_priority_queue;
        if (cnt>1)
        {
            cout<<"not sure\n";
        }
        else if(is_stack){
            cout<<"stack\n";
        }
        else if(is_queue){
            cout<<"queue\n";
        }
        else if(is_priority_queue){
            cout<<"priority queue\n";
        }
        else cout<<"impossible\n"; 
    }
    
}