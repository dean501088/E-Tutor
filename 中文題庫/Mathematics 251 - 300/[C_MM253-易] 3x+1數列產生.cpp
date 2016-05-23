#include<iostream>
 
using namespace std;
 
int main()
{
    int n;
    while (cin >> n)
    {
        cout << n << endl;
 
        while (true)
        {
            if (n % 2 == 0)
                n /= 2;
            else
                n = 3 * n + 1;
            cout << n << endl;
 
            if (n == 1)
                break;
        }
    }
    return 0;
}