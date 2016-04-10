#include<iostream>
 
using namespace std;
 
int main()
{
    double m, n;
    while (cin >> m >> n)
    {
        printf("%.1f\n", m / n / 60);
    }
    return 0;
}