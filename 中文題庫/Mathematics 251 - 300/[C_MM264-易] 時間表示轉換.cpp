#include<iostream>
 
using namespace std;
 
int main()
{
    int n;
    while (cin >> n)
    {
        int s = n % 60;
        int m = (n / 60) % 60;
        int h = (n / 3600) % 24;
        int d = n / 3600 / 24;
 
        printf("%d=%0.2d,%0.2d,%0.2d,%0.2d\n", n, d, h, m, s);
    }
    return 0;
}