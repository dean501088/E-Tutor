#include<iostream>  
#include<string>  
 
using namespace std;
 
int main()
{
    string s;
    getline(cin, s);
 
    int count = 0;
    int last = s.length() - 1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[last - i] == s[i])
            count++;
        else
            break;
    }
 
    if (s.length() == count)
    {
        cout << s;
        cout << " is a palindrome.";
    }
    else
    {
        cout << s;
        cout << " is not a palindrome.";
    }
    cout << endl;
    return 0;
}