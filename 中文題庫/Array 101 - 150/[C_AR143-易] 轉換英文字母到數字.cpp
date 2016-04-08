#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    string s;
    while (cin >> s)
    {
        for (int i = 0; i < s.length(); i++)
            printf("(%d)", s[i] - 'a');
        cout << endl;
    }
    return 0;
}