#include<iostream>
#include<cmath>
 
using namespace std;
 
int main()
{
    double x, y;
    while(cin >> x >> y)
    {
        double dist = 0;
        dist += pow(x - 10, 2.0);
        dist += pow(y - 10, 2.0);
        dist = pow(dist, 0.5);
         
        bool ok = false;
        for(int i = 1; i < 11; i++)
        if(dist <= i)
        {
            cout << 11 - i << endl;
            ok = true;
            break;
        }
        if(!ok)
            cout << 0 << endl;
    }
    return 0;
}