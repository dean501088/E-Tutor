#include<iostream>
  
#define MAX 999999
  
using namespace std;
  
bool ok(int x, int y)
{
    bool temp[10];
    for (int i = 0; i < 10; i++)
        temp[i] = false;
         
    //count
    int cx = 0;
    int cy = 0;
     
    while (x)
    {
        if (temp[x % 10])
            return false;
        temp[x % 10] = true;
        x /= 10;
        cx++;
    }
    while (y)
    {
        if (temp[y % 10])
            return false;
        temp[y % 10] = true;
        y /= 10;
        cy++;
    }
     
    return (cx == 5 && cy == 5)
    || (cx + cy == 9 && !temp[0]);
}
  
int main()
{   
    int n;
    while (cin >> n)
    {
        bool print = false;
  
        for (int i = 1; i * n < MAX; i++)
        if (ok(i, i * n))
        {
            printf("%05d / %05d", i * n, i);
            printf(" = %d\n", n);
            print = true;
        }
        if(!print)
            printf("No solutions for %d.\n", n);
    }
    return 0;
}