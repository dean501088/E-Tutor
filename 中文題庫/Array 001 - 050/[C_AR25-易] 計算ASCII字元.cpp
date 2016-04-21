#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    string s;
    while(cin >> s)
    {
        int alpha[128] = { 0 };
        for(int i = 0; i < s.length(); i++)
            alpha[s[i]]++;
         
        for(int i = 127; i > -1; i--)
            if(alpha[i] > 0)
                printf("%d %d\n", i, alpha[i]);
    }
    return 0;
}