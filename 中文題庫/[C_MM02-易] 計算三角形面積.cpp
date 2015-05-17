#include<iostream>  
#include<iomanip>  
using namespace std;  
int main()  
{  
    double x, y;  
    while(cin >> x >> y)  
        cout << fixed << setprecision(1) << x*y/2 << endl;  
    return 0;  
}  