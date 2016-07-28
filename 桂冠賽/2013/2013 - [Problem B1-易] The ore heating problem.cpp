#include<iostream>
#include<cmath>
 
using namespace std;
 
int main()
{
    //initialize
    int n;
    while(cin >> n && n)
    while(n--)
    {
        double m; cin >> m;
        cin.get();
        double t; cin >> t;
         
        t *= (t + 1) * 2.71828;
        t /= 2;
        m += t;
         
        m *= 10000;
        m = floor(m + 0.5);
        m /= 10000;
         
        printf("%.4lf\n", m);
    }
    return 0;
}