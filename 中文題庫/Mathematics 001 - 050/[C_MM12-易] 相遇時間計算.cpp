#include<iostream>  
using namespace std;  
int f(double x);  
int main()  
{  
    int x;  
    while(cin >> x)  
        cout << f(x/(1-0.3*2.54)) << endl;  
    return 0;  
}  
int f(double x)  
{  
    if(x>(int)x)  
        return x+1;  
    else 
        return (int)x;  
}  