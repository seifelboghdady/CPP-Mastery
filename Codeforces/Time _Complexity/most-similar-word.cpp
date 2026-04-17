#include <iostream>
using namespace std;


int main(){
    // loop for test cases
    int t; cin >> t;
    while (t--)
    {
        int min_diff = 1e9;
        int n, m; cin>>n>>m;
        string words[n];
        for (int i = 0; i < n; i++)
        {
            string word; cin>>word;
            words[i] = word;
        }

        for(int i =0; i<n ; i++){
            for(int j = i+1; j<n ; j++){
                int current_total_diff = 0;
                for(int k = 0; k<m ; k++){
                    current_total_diff += abs(words[i][k] - words[j][k]);
                }

                if(current_total_diff < min_diff){
                    min_diff = current_total_diff;
                }
            }
        }
        cout << min_diff << endl;
    }
    
}