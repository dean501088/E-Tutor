#include<iostream>
#include<cmath>
   
using namespace std;
  
int main()
{
    double e[3];
    while(cin >> e[0] >> e[1] >> e[2])
    {
        double s = 0;   
        for(int i = 0; i < 3; i++)
            s += e[i];
        s /= 2;
 
        double area = s;
        for(int i = 0; i < 3; i++)
            area *= s - e[i];
        area = pow(area, 0.5);
         
        if(area > 0)
            printf("%.6lf\n", area);
        else
            printf("no answer\n");
    }
    return 0;
}