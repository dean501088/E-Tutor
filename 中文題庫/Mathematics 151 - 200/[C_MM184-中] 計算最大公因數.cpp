#include<iostream>
 
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
    {
        if(!n && !m)
            break;
        cout << gcd(n, m) << endl;
    }
    return 0;
}