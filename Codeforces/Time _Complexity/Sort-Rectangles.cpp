#include <iostream>
#include <algorithm>
using namespace std;


struct rectangle
{
    int idx,l,w;
    long long area;
};

bool comp(rectangle r, rectangle rr){
    return r.area<rr.area;
}

int main(){
    int n; cin>>n;
    rectangle arr[n];
    for (int i = 0; i < n; i++)
    {
        int x1, y1, x2, y2, x3, y3, x4, y4;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        int x_max = max({x1, x2, x3, x4});
        int x_min = min({x1, x2, x3, x4});
        int y_max = max({y1, y2, y3, y4});
        int y_min = min({y1, y2, y3, y4});

        int l = x_max - x_min;
        int w = y_max - y_min;
        long long area = 1ll*l*w;

        arr[i]={i+1,l, w, area};
    }

    sort(arr, arr+n, comp);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i].idx<<' '<<arr[i].area<<endl;
    }
    
    
    
}