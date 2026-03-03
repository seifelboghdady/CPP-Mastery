#include <iostream>
#include<algorithm>
using namespace std;

struct event
{
    int time;
    int type;
};

bool compare(event a, event b){
    if (a.time != b.time){
        return a.time < b.time;
    }
    return a.type<b.type;
}


int main(){
    int n; cin>>n;
    event events[100005];
    int eventCount = 0;
    for (int i = 0; i < n; i++)
    {
        int arrival, leaving; cin>>arrival>>leaving;
        events[eventCount].time = arrival;
        events[eventCount].type = 1; 
        eventCount++;


        events[eventCount].time = leaving;
        events[eventCount].type = -1;
        eventCount++;
    }
    sort(events, events + eventCount, compare);

    int max_customers = 0;
    int current_customers = 0;

    for (int i = 0; i < eventCount; i++) {
        current_customers += events[i].type;
        
        if (current_customers > max_customers) {
            max_customers = current_customers;
        }
    }

    cout << max_customers << endl;

    

}