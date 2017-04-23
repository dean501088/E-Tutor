#include<iostream>
 
using namespace std;
 
int main()
{
    int n;
    while(cin >> n)
    {
        cin.get();
         
        while(n--)
        {
            char c; cin.get(c);
             
            int x[2];
            cin >> x[0] >> x[1];
            int y[2];
            cin >> y[0] >> y[1];
            int z[2];
             
            cin.get();
             
            if(c == '+')
            {
                z[0] = x[0] + y[0];
                z[1] = x[1] + y[1];
            }
            else if(c == '-')
            {
                z[0] = x[0] - y[0];
                z[1] = x[1] - y[1];
            }
            else if(c == '*')
            {
                z[0] = 0;
                z[0] += x[0] * y[0];
                z[0] -= x[1] * y[1];
                 
                z[1] = 0;
                z[1] += x[0] * y[1];
                z[1] += x[1] * y[0];
            }
            printf("%d %d\n", z[0], z[1]);
        }
    }
    return 0;
}