/*
You have an empty queue and your boss has some queries. 
These queries are queue's basic operations such as Enqueue, Dequeue, and printing some values. 
Now, your boss asks you to process his queries. 
Input First line contains an integer T (0 <= T <= 106). 
Each of the T next lines contains a query based on these formats. 
1 n : Enqueue n (-109 <= n <= 109) to the queue. 
2 : Dequeue an element from the queue. If the queue is empty, do nothing. 
3 : Print the queue's first element's value (see Output). Output For each query 
3, print the queue's first element's value. If the queue is empty, print 'Empty!' without quotes. 
Input: 
6 
1 5 
1 6 
2 
3 
2 
3 
Output: 
6 
Empty!
*/
#include <iostream>
#include <queue>

using namespace std;

int main(){
    int t; cin>>t;
    queue <int> qu;
    for (int i = 0; i < t; i++)
    {
        int q; cin>>q;
        if(q==1){
            int num; cin>>num;
            qu.push(num);
        }else if(q == 2){
            if(!qu.empty())
                qu.pop();
        }else if(q==3){
            if (!qu.empty())
            {
                cout<<qu.front()<<"\n";
            }else{
                cout<<"Empty!\n";
            }
        }
    }
}
    
