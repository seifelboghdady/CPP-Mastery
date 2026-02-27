#include <iostream>

using namespace std;

int main(){
    int t; cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a[10]; 
        int n;
        cin >> n;
        bool sorted = true;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i > 0 && a[i] < a[i - 1]) {
                sorted = false;
            }

        }
        if (sorted) {
            cout << n << endl;
        } else {
            cout << 1 << endl; 
        }

    }
    return 0;
}