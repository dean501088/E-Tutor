#include<iostream>
#include<string>
 
using namespace std;
 
int offset(string s)
{
    for(int i = 0; i < s.length(); i++)
        if(s[i] != ' ')
            return i;
     
    return s.length();
}
 
int main()
{
    string a, b;
     
    getline(cin, a);
    getline(cin, b);
         
    if(a.find(b) != a.npos)
        cout << a.find(b) - offset(a) << endl;
    else
        cout << -1 << endl;
     
    return 0;
}