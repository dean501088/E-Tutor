#include<iostream>
 
using namespace std;
 
int main()
{
    int a, b, c;
    int d, e, f;
    int g, h, i;
    while(cin >> a >> b >> c
    >> d >> e >> f
    >> g >> h >> i)
    {
        int ans = a * e * i;
        ans += d * h * c;
        ans += g * b * f;
        ans -= c * e * g;
        ans -= b * d * i;
        ans -= a * f * h;
         
        cout << ans << endl;
    }
    return 0;
}