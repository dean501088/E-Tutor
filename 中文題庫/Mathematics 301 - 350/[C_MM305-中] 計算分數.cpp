#include<iostream>
#include<string>
 
using namespace std;
 
int gcd(int x, int y)
{
    while (x %= y)
        swap(x, y);
    return y;
}
 
int main()
{
    int n;
    while(cin >> n)
    while(n--)
    {
        //input
        int ax; cin >> ax;
        cin.get();      
        int ay; cin >> ay;
        cin.get();
        int bx; cin >> bx;
        cin.get();      
        int by; cin >> by;
        cin.get();
         
        int x = 0;
        x += ax * by;
        x += bx * ay;       
        int y = ay * by;
             
        int common = gcd(x, y);
        x /= common;
        y /= common;
         
        printf("%d/%d\n", x, y);
    }
    return 0;
}