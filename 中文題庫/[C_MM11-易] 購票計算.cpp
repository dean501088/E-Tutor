#include<iostream>  
using namespace std;  
int main()  
{  
    int x;  
    while(cin >> x)  
    {  
        cout << "NT10=" << x/10 << endl;  
        cout << "NT5=" << (x%10)/5 << endl;  
        cout << "NT1=" << (x%5) << endl;  
    }  
    return 0;  
}  