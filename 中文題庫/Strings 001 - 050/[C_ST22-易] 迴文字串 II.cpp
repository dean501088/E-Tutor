#include<iostream>
#include<string>
  
using namespace std;
  
int main()
{
    string s;
    while(cin >> s)
    {
        int last = s.length() - 1;
        int offset = 'a' - 'A';
          
        for(int i = 0; i < s.length(); i++)
        {
            int index = last - i;
             
            if(s[index] >= 'a'
            && s[index] <= 'z')
                s[last - i] -= offset;
            else if(s[index] >= 'A'
            && s[index] <= 'Z')
                s[last - i] += offset;
                  
            cout << s[last - i];
        }
        cout << endl;
    }   
    return 0;
} 