#include<iostream>  
#include<iomanip>  
using namespace std;  
int main()  
{  
    int x, y;  
    while(cin >> x >> y)  
    {  
        cout << x << "+" << y << "=" << x+y << endl;  
        cout << x << "*" << y << "=" << x*y << endl;  
        cout << x << "-" << y << "=" << x-y << endl;  
        cout << x << "/" << y << "=";  
        if(x<0)  
            cout << x/y-1 << "..." << x%y+y << endl;  
        else  
            cout << x/y << "..." << x%y << endl;  
    }  
    return 0;  
}  