#include<iostream>  
using namespace std;  
int main()  
{  
    int x, y;  
    while(cin >> x >> y)  
    {  
        while(true)  
        {  
            if(x>y)  
            {  
                if(x%y==0)  
                {  
                    cout << y << endl;  
                    break;  
                }  
                else 
                    x%=y;  
            }  
            else 
            {  
                if(y%x==0)  
                {  
                    cout << x << endl;  
                    break;  
                }  
                else 
                    y%=x;  
            }         
        }  
    }  
    return 0;  
}  