#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    string s;
    while(cin >> s)
    {
        int score = 0;
     
        for(int i = 0; i < s.length(); i++)
        {   
            if(s[i] >= 'a' && s[i] <= 'z')
                score += s[i] - 'a' + 1;
            if(s[i] >= 'A' && s[i] <= 'Z')
                score += s[i] - 'A' + 1;
        }
         
        cout << score << endl;
    }
    return 0;
}