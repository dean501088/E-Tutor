#include<iostream>
#include<cmath>
 
using namespace std;
 
int f(int n)
{
    int count = 1;
 
    while (n != 1)
    {
        if (n % 2 == 1)
            n = 3 * n + 1;
        else
            n /= 2;
 
        count++;
    }
    return count;
}
 
int main()
{
    int x, y;
    while (cin >> x >> y)
    {
        if (x > y)
        {
            int temp = x;
            x = y;
            y = temp;
        }
 
        int max = 0;
 
        for (int i = x; i < y + 1; i++)
        {
            if (f(i) > max)
                max = f(i);
        }
        printf("%d %d %d\n", x, y, max);
    }
    return 0;
}