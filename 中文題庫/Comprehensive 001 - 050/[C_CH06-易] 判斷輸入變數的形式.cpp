#include<iostream>    
#include<string>    
     
using namespace std;    
     
int main()    
{    
    string s;    
    while(cin >> s)    
    {    
        if(s[0] >= '0' && s[0] <= '9')    
        {    
            bool d = false;    
                 
            for(int i = 0;i < s.length(); i++)    
            {    
                if(s[i] == '.')    
                {    
                    d = true;    
                    break;      
                }    
            }    
                 
            if(d)    
                cout << "float";    
            else   
                cout << "int";    
        }    
        else if(s[0] >= 'a' && s[0] <= 'z')    
        {    
            if(s.length() > 1)    
                cout << "string";    
            else   
                cout << "char";    
        }    
        else   
            cout << "char";    
        cout << endl;    
    }    
    return 0;    
}  