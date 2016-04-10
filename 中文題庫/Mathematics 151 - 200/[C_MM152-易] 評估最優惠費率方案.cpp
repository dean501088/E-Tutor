#include<iostream>
#include<cmath> 
 
using namespace std;
 
int main()
{
    int n;
    while(cin >> n)
    {
        int a = 290 * 24;
        int b = 550 * 24;
        int c = 700 * 24;
         
        a += (0.09 * n - 290) * 24;
        b += (0.07 * n - 550) * 24;
        c += (0.05 * n - 700) * 24;
         
        a -= 10000;
        b -= 7000;
        c -= 5000;
         
        int m = min(a, b);
        m = min(m, c);
         
        if(m == a)
            cout << "A\n";
        if(m == b)
            cout << "B\n";
        if(m == c)
            cout << "C\n";
    }
    return 0;
}