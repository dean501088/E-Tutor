#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    int sp[12] = {
        1, 3, 5, 2,
        4, 6, 1, 3,
        5, 2, 4, 6
    };
 
    int n;
    while(cin >> n)
    while(n--)
    {
        cin.get();
        int a = 0;
        string s; cin >> s;
        for(int i = 0; i < 12; i++)  
            a += (s[i] - '0') * sp[i];
        int b = a % 10;
        int c = 10 - b;
     
        if(c == s[12] - '0')
            cout << "yes\n";
        else
            cout << "no\n";
    }   
    return 0;
} 