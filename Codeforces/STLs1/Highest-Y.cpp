#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    // pair <int, int> p;
    int n; cin>>n;
    vector <pair<int,int>> pairs(n);
    for (int i = 0; i < pairs.size(); i++)
    {
        cin>>pairs[i].second>>pairs[i].first;
    }
    sort(pairs.rbegin(), pairs.rend());
    for (int i = 0; i < pairs.size(); i++)
    {
        cout<<pairs[i].second<<' '<<pairs[i].first<<'\n';
        
    }
      
}