#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    int n;
    while (cin >> n)
    {
        string s = "00000000000000000000000000000000";
        for (int i = 0; i < s.length(); i++)
        {
            if (n % 2 == 1)
                s[s.length() - 1 - i] = '1';
            n /= 2;
        }
        cout << s << endl;
    }
    return 0;
}