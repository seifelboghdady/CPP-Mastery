#include <iostream>
using namespace std;


int main(){
    // Read K, S 
    int K, S; cin >> K >> S;
    // count num of triples (x, y, z) satisfying x + y + z = S and 0 <= x, y, z <= K
    int count = 0;
    for (int i = 0; i <= K; i++)
    {
        //itrate y from 0 to K
        for (int j = 0; j <= K; j++){
            //calc z
            int z = S-i-j;
            //check if z is in range [0, K]
            if (z >= 0 && z <= K){
                count++;
            }
        }

        
    }
    cout << count << endl;
    
}