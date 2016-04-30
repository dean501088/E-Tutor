#include<iostream>
#include<sstream>
#include<string>
 
using namespace std;
 
int main()
{
    string s;
     
    while(cin >> s && s != "end")
    {
        int temp;
        if(s[0] == '0' && s[1] == 'x')
        {
            istringstream(s) >> hex >> temp;
            cout << dec << temp << endl;  
        }
        else
        {
            istringstream(s) >> oct >> temp;
            cout << dec << temp << endl;
        }
    }
    return 0;
}