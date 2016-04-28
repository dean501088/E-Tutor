#include<iostream>
#include<string>
#include<cmath>
 
using namespace std;
 
int main()
{
    string s;
    while (cin >> s)
    {
        int num = 0;
        int sum = 0;
 
        for (int i = 0; i < s.length(); i++)
        {
            int bit = s[i] - '0';
            double exp = (double)s.length() - 1 - i;
            num += pow(10.0, exp) * bit;
            sum += pow((double)bit, 3.0);
        }
        cout << (num == sum) << endl;
    }
    return 0;
}