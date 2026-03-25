#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    long long k; cin>>k;
    queue<int> players;
    for (int i = 0; i < n; i++)
    {
        int player; cin>>player;
        players.push(player);

    }
    int current = players.front();
    players.pop();
    long long wins = 0;
    while(wins<k){
        int next_player= players.front();
        players.pop();
        if (current>next_player)
        {
            /* code */
            wins++;
            players.push(next_player);
        }else{
            players.push(current);
            current = next_player;
            wins =1;
        }
        if (current == n) break;
        
    }
    cout<<current;
}