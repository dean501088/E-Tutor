#include<iostream>  
#include<iomanip>  
using namespace std;  
int main()  
{  
    double x, y, z;  
    while(cin >> x >> y >> z)  
        cout << "Trapezoid area:";
        cout << fixed << setprecision(1) << (x+y)*z/2 << endl;  
    return 0;  
}  