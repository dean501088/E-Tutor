#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    string s;
    while(cin >> s)
    {
        int one = 0;
        for(int i = 0; i < s.length(); i++)
            if(s[i] == '1')
                one++;
         
        for(int i = 0; i < s.length(); i++)
        {
            if(i < one)
                s[i] = '1';
            else
                s[i] = '0';
        }
        cout << s << endl;
    }
    return 0;
}