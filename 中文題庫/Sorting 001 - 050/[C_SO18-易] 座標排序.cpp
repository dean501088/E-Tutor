#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
 
using namespace std;
 
class point
{
    public:
        int x, y;
        double d;
         
        point() {}
        point(int a, int b)
        :x(a), y(b)
        {
            double c = 0;
            c += a * a;
            c += b * b;
             
            d = pow(c, 0.5);
             
            d *= 100;
            d += 0.5;
            d = (int)d;
            d /= 100;
        }
         
        bool operator<(const point &var)const
        {
            return d < var.d;
        }
};
 
int main()
{
    int n;
    while(cin >> n)
    {
        vector<point> p;
         
        while(n--)
        {
            int x, y;
            cin >> x >> y;
             
            p.push_back(point(x, y));
        }
        sort(p.begin(), p.end());
         
        int middle = p.size() / 2;
         
        if(p.size() % 2 == 0)
            printf("%.2f\n", p[middle - 1].d);
        printf("%.2f\n", p[middle].d);  
    }
    return 0;
}