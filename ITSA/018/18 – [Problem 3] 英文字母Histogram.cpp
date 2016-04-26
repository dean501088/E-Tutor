#include<iostream>
#include<string>
  
using namespace std;
  
int main()
{
    string s;
    while(cin >> s)
    {
        int count[26] = { 0 };
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
                count[s[i] - 'a']++;
            if(s[i] >= 'A' && s[i] <= 'Z')
                count[s[i] - 'A']++;
        }   
        for(int i = 0; i < 26; i++)
        if(count[i] > 0)
        {
            printf("%c ", i + 'a');
            printf("%d\n", count[i]);
        }
    }
    return 0;
}