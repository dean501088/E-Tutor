#include<iostream>
 
using namespace std;
 
int main()
{
    int n;
    while(cin >> n)
    while(n--)
    {
        int x, y;
        cin >> x >> y;
        int sum = 0;
        sum += 250 * x;
        sum += 175 * y;
        cout << sum << endl;
    }
    return 0;
}