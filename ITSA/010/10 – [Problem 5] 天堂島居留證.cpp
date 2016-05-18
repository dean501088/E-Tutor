#include<iostream>
#include<string>
  
using namespace std;
  
int main()
{
    int sp[12] = {
        9, 8, 7, 6,
        5, 4, 4, 5,
        6, 7, 8, 9
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
            cout << "Yes\n";
        else
            cout << "No\n";
    }   
    return 0;
} 