#include<iostream>  
#include<iomanip>  
using namespace std;  
int main()  
{  
    int x;  
    while(cin >> x)  
    {
        cout << x << " " << x*x << " ";
        cout << x*x*x << endl;
    } 
    return 0;  
}