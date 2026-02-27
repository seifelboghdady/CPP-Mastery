#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) { 
        int n;
        cin >> n;
        vector<int> a(n);
        long long total_dishes = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total_dishes += a[i];
        }

        set<int> winners; 

        for (int start_player = 0; start_player < n; start_player++) {
            vector<int> temp_a = a; 
            long long remaining = total_dishes;
            int current = start_player;
            int last_winner = -1;

            while (remaining > 0) {
                if (temp_a[current] > 0) {
                    temp_a[current]--; 
                    remaining--;
                    last_winner = current; 
                    
                }
                current = (current + 1) % n;
            }
            winners.insert(last_winner); 
        }
        
        cout << winners.size() << endl;
    }
    return 0;
}