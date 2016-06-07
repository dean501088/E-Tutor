#include<iostream>
 
using namespace std;
 
int main()
{
    int n;
    while(cin >> n)
    {
        while(n--)
        {
            double heat[101];
                         
            double t; cin >> t;
            heat[0] = t;
             
            cin.get();
             
            int m; cin >> m;  
             
            for(int i = 1; i < m + 1; i++)
            {
                heat[i] = heat[i - 1];
                heat[i] += i * 2.71828; 
            }
             
            heat[m] *= 10000;
            heat[m] += 0.5;
            heat[m] = (int)heat[m];
            heat[m] /= 10000;
             
            printf("%.4f\n", heat[m]);
        }
    }
    return 0;
}