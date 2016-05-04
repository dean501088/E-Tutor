#include<iostream>
#include<cmath>
 
using namespace std;
 
int main()
{
    int x, y;
    while (cin >> x >> y)
    {
        for (int i = x; i < y + 1; i++)
        {
            for (int j = 0; j < 60; j++)
            {
                double h = (i % 12) * 30; 
                h += j * 0.5;
 
                double m = j * 6;
 
                double angle = abs(h - m);
 
                if (angle > 180)
                    angle = 360 - angle;
 
                if (angle >= 88 && angle <= 92)
                {
                    if (i < 10) 
                        printf("0%d", i);
                    else
                        printf("%d", i);
 
                    if (j < 10)
                        printf(":0%d", j);
                    else
                        printf(":%d", j);
 
                    printf(" degree=%.2f\n", angle);
                }
 
                if (i == y)
                    break;
            }
        }
    }
    return 0;
}