#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
class Point
{
    public:
        Point(int i, int j)
        {
            x=i;
            y=j;
        }
        Point() {}
        int x, y;
};
int main()
{
    int n;
    while(cin >> n && n)
    {
        while(n--)
        {
            int m; cin >> m;
            vector<Point> p;
            while(m--)
            {
                int x, y; cin >> x >> y;
                p.push_back(Point(x, y));
            }
 
            int max = 0;
            for(int i=0;i<p.size();i++)
                for(int j=i+1;j<p.size();j++)
                    if((int)abs(p[i].x-p[j].x)*(int)abs(p[i].y-p[j].y) > max)
                        max = abs(p[i].x-p[j].x)*abs(p[i].y-p[j].y);
 
            cout << max << endl;
        }
    }
    return 0;
}