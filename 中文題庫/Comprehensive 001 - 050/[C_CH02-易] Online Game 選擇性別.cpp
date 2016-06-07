#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    string s[3];
    s[0] = "ByeBye";
    s[1] = "Male";
    s[2] = "Female";
     
    string n;
    while(cin >> n)
    {
        if(n == "E")
            cout << s[0];
        else if(n == "M")
            cout << s[1];
        else if(n == "F")
            cout << s[2];
        cout << endl;     
    }
    return 0;
}