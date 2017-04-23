#include <iostream>
 
using namespace std;
 
int gcd(int x, int y)
{
    while (x %= y)
        swap(x, y);
    return y;
}
 
int main()
{
    int n, m;
    while(cin >> n >> m)
    printf("%d\n", gcd(n, m));
    return 0;
}