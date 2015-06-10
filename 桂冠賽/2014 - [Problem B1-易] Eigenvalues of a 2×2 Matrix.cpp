#include<iostream>
#include<cmath>
 
using namespace std;
 
int main()
{
    int n;
    while (cin >> n && n)
    {
        while (n--)
        {
            int a, c, d;
            cin >> a >> c >> c >> d;
 
            int m = -1 * (a + d);
            int n = a * d - c * c;
 
            double x = -m + pow(m * m - 4 * n, 0.5);
            double y = -m - pow(m * m - 4 * n, 0.5);
 
            x /= 2;
            y /= 2;
 
            printf("%.2f %.2f\n", x, y);
        }
    }
    return 0;
}