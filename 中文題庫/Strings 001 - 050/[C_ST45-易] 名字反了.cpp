#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    int n;
    while(cin >> n)
    {
        while(n--)
        {
            string s; cin >> s;
             
            int last = s.length() - 1;
            int offset = 'a' - 'A';
             
            for(int i = 0; i < s.length(); i++)
            {
                if(i == 0)
                    s[last - i] -= offset;
                 
                if(i == last)
                    s[last - i] += offset;
                     
                cout << s[last - i];
            }
            cout << endl;
        }
    }   
    return 0;
} 