#include<iostream>
#include<string>
#include<cmath>
 
using namespace std;
 
int main()
{
    string s;
    while(cin >> s && s != "end")
    {
        int sum = 0;
        for(int i = 0 ; i < s.length() ; i++)
        {
            int index = s.length() - 1 - i;
            sum += (s[i] - '0') * pow(2.0, index);
        }
        cout << sum << endl;
    }
    return 0;
}