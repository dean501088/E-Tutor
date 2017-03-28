#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    int alpha[26];
    // A to H
    for(int i = 0; i < 8; i++)
        alpha[i] = i + 10;
    // I
    alpha[8] = 34;
    // J to N
    for(int i = 9; i < 14; i++)
        alpha[i] = i + 9;
    // O
    alpha[14] = 35;
    // P to V
    for(int i = 15; i < 22; i++)
        alpha[i] = i + 8;
    // W
    alpha[22] = 32;
    for(int i = 23; i < 25; i++)
        alpha[i] = i + 7;
    alpha[25] = 33;
     
    string s;
    while(cin >> s)
    {
        int x1 = alpha[s[0] - 'A'] / 10;
        int x2 = alpha[s[0] - 'A'] % 10;
        int check = x1 + 9 * x2;
        int fix = 8;
         
        for(int i = 1; i < s.length(); i++)
        {
            check += (s[i] - '0') * fix;            
            if(fix > 1)
                fix--;
        }
        if(check % 10 == 0)
            cout << "CORRECT!!!\n";
        else
            cout << "WRONG!!!\n";
    }
    return 0;
}