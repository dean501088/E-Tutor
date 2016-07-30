#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    int n;
    while(cin >> n)
    {
        cin.get();
         
        while(n--)
        {
            string s; 
            getline(cin, s);
             
            bool ascii[150] = { false };
            int del = 0;
             
            for(int i = 0; i < s.length(); i++)
            {
                if(!ascii[s[i]])
                    ascii[s[i]] = true;
                else
                    del++;
            }
             
            printf("%d", s.length());
            printf(" %d\n", s.length() - del); 
        }
    }
    return 0;
}