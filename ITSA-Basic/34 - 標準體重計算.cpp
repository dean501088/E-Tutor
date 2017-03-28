#include<iostream>  
   
using namespace std;  
   
int main()  
{  
    int n, m;  
    while(cin >> n >> m)  
    {  
        double w;  
           
        if(m == 1)  
            w = (n - 80) * 0.7;  
        else 
            w = (n - 70) * 0.6;  
               
        printf("%.1f\n", w);  
    }  
    return 0;  
}  