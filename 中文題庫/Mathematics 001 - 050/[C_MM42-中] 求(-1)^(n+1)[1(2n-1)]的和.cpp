#include<iostream>
#include<cmath>
 
using namespace std;
 
int main()
{
    int n;
    while(cin >> n)
    {
        double sum = 0;
         
        for(int i = 1; i < n + 1; i++)
        {
            double a = pow(-1.0, i + 1);
            double b = 2 * i - 1;
             
            sum += a / b;   
        }   
        sum *= 1000;
        sum += 0.5;
        sum = floor(sum);
        sum /= 1000;
         
        printf("%.3f\n", sum);
    }
    return 0;
}