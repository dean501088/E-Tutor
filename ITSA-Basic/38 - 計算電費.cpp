#include<iostream>
 
using namespace std;
 
int main()
{
    int n;
    while (cin >> n)
    {
        double summer = 0;
        double normal = 0;
 
        double level[4][2];
 
        // <= 120
        level[0][0] = 120 * 2.1;
        level[0][1] = 120 * 2.1;
        // 121 - 330
        level[1][0] = 210 * 3.02;
        level[1][1] = 210 * 2.68;
        // 331 - 500
        level[2][0] = 170 * 4.39;
        level[2][1] = 170 * 3.61;
        // 501 - 700
        level[3][0] = 200 * 4.97;
        level[3][1] = 200 * 4.01;
         
        if (n > 700)
        {
            summer += (n - 700) * 5.63;
            normal += (n - 700) * 4.5;
             
            for (int i = 0; i < 4; i++)
            {
                summer += level[i][0];
                normal += level[i][1];
            }
        }
        else if (n > 500)
        {
            summer += (n - 500) * 4.97;
            normal += (n - 500) * 4.01;
             
            for (int i = 0; i < 3; i++)
            {
                summer += level[i][0];
                normal += level[i][1];
            }
        }
        else if (n > 330)
        {
            summer += (n - 330) * 4.39;
            normal += (n - 330) * 3.61;
 
            for (int i = 0; i < 2; i++)
            {
                summer += level[i][0];
                normal += level[i][1];
            }
        }
        else if (n > 120)
        {
            summer += (n - 120) * 3.02;
            normal += (n - 120) * 2.68;
 
            for (int i = 0; i < 1; i++)
            {
                summer += level[i][0];
                normal += level[i][1];
            }
        }
        else if (n > 0)
        {
            summer += n * 2.1;
            normal += n * 2.1;
        }
        printf("Summer months:%.2f\n", summer);
        printf("Non-Summer months:%.2f\n", normal);
    }
    return 0;
}