#include<iostream>  
#include<cmath>  
using namespace std;  
int main()  
{  
    int x;  
    while(cin >> x)  
    {  
        if(x>30)  
            cout << "Value of more than 31" << endl;  
        else 
            cout << (long long int)pow(2.0, (double)x) << endl;  
    }  
    return 0;  
}  