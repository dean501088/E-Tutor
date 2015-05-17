#include<iostream>  
#include<iomanip>  
using namespace std;  
int main()  
{  
    double x;  
    while(cin >> x)  
        cout << fixed << setprecision(1) << 1.6*x << endl;  
    return 0;  
}  