#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    while(cin >> s)
    {
        int count = 0;
 
        for(int i=0;i<s.length()/2;i++)
            if(s[i] == s[s.length()-1-i])
                count++;
 
        if(count == s.length()/2)
            cout << s << " is a palindrome." << endl;
        else
            cout << s << " is not a palindrome." << endl;
    }
    return 0;
}