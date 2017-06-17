#include <iostream>
#include <cmath>
 
using namespace std; 
 
int main()
{
    double n, x;
    while (cin >> n >> x)
    {
        double sum = 0;
 
        for (int i = 1; i < n + 1; i++)
        {
            double fixed = 1;
            if (i % 2 == 0)
                fixed = 2;
 
            sum += (x + (0.5 * x) * (i - 1)) / fixed;
        }
        printf("%.2f\n", sum);
    }
    return 0;
}