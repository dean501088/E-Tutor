#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    double n;
    string unit;    
    cin >> n >> unit;
     
    if(unit == "m")
        n *= 100;
     
    double r;
    cin >> r >> unit;
     
    if(unit == "m")
        r *= 100;
         
    double d;
    cin >> d >> unit;
     
    if(unit == "m")
        d *= 100;
         
    cout << (n - r) / (r - d) + 1 << endl;
     
    return 0;   
}