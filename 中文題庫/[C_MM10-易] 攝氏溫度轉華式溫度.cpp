#include<iostream>  
#include<iomanip>  
using namespace std;  
int main()  
{  
    double x;  
    while(cin >> x)  
        cout << fixed << setprecision(1) << (x*9/5)+32 << endl;  
    return 0;  
}  