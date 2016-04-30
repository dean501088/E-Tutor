#include<iostream>
 
using namespace std;
 
int main()
{
    int n;
    while (cin >> n)
    {
        if (n > 0)
        {
            int sum = 1;
            for (int i = 2; i < n; i++)
                sum *= i;
            cout << sum << endl;
        }
        else
            cout << 0 << endl;
    }
    return 0;
}