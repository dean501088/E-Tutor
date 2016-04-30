#include<iostream>  
using namespace std;  
int main()  
{  
    int x;  
    while(cin >> x)  
    {  
        cout << x/86400 << " days\n";  
        cout << x/3600%24 << " hours\n";  
        cout << x/60%60 << " minutes\n";  
        cout << x%60 << " seconds\n";  
    }  
    return 0;  
}  