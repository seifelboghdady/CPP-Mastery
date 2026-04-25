#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin>>a[i];

    sort(a.begin(), a.end());

    int max_student = 0;

    for (int i = 0; i < n; i++)
    {
        auto it = upper_bound(a.begin(), a.end(), a[i]+5);
        int count = it - (a.begin() + i);

        max_student = max(max_student, count);
    }
    cout << max_student << endl;
}