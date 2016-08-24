#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    string s;
    while(cin >> s)
    {
        for(int i = 0; i < 5; i++)
        {
            cout << s[i];
             
            if(i < 4)
                cout << "   ";    
        }   
        cout << endl;
    }   
    return 0;
} 