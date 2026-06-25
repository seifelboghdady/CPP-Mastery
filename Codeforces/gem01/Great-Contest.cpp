#include <bits/stdc++.h>
#define int long long
using namespace std;

struct point{
    int x;
    int y;
    double angle;

};

const double PI = acos(-1.0);

vector<int> presumx;
vector<int>presumy;

bool comp(const point &a,const point &b){
    return a.angle < b.angle;
}


int calcHalfSum(int u, int v, vector<point>& points, vector<double>&ang) {

    

    double target = atan2(v, u);
    if (target < 0)
        target += 2 * PI;

    double left = target - PI / 2;
    double right = target + PI / 2;

    if (left < 0) {
        left += 2 * PI;
        right += 2 * PI;
    }

    int L = lower_bound(ang.begin(), ang.end(), left + 1e-9) - ang.begin();
    int R = upper_bound(ang.begin(), ang.end(), right - 1e-9) - ang.begin() - 1;

    if (L > R)
        return 0;

    long long totalx = presumx[R + 1] - presumx[L];
    long long totaly = presumy[R + 1] - presumy[L];

    return u * totalx + v * totaly;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q; cin>>n>>q;
    // vector<pair<int,int>> teams(n);
    //Points: Array of Point of size n
    vector<point> points(n);
    for (int i = 0; i < n; i++)
    {
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        points[i].x=a-b;
        points[i].y=c-d;
        points[i].angle = atan2(points[i].y, points[i].x);
        if(points[i].angle < 0)
            points[i].angle += 2 * PI;
    }
    sort(points.begin(), points.end(),comp);
    vector<double> ang(2 * n);

    for (int i = 0; i < n; i++) {
        ang[i] = points[i].angle;
        ang[i + n] = points[i].angle + 2 * PI;
    }
    presumx.assign(2 * n + 1, 0);
    presumy.assign(2 * n + 1, 0);
    for (int i = 1; i <= 2 * n; i++)
    {
        presumx[i] = presumx[i-1] + points[(i-1) % n].x;
        presumy[i] = presumy[i-1] + points[(i-1) % n].y;
    }
    
    for (int i = 0; i < q; i++)
    {
        int k,l; cin>>k>>l;

        int Max_Penalty = 0;
        //Directions = [ (k, l), (k, -l), (-k, l), (-k, -l) ]
        vector<pair<int,int>> Directions = {
            {k, l},
            {k, -l},
            {-k, l},
            {-k, -l}
        };
        for(auto[u,v] : Directions){
            int Current_Value = calcHalfSum(u, v, points, ang);
            Max_Penalty = max(Max_Penalty, Current_Value);
        }
        cout<<Max_Penalty<<'\n';
    }
    
    

}