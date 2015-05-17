#include<iostream>  
using namespace std;  
bool f(int x);  
int main()  
{  
    int n;  
    while(cin >> n)  
    {  
        int k=1, x[500], T=0, m=0;  
        for(int i=0;i<n;i++)  
        {  
            for(int j=k+1;j<500;j++, k++)  
            {                 
                if(f(j))  
                {  
                    k++;  
                    x[m]=j;  
                    m++;  
                    break;  
                }  
            }  
        }  
        for(int i=0;i<m;i++)  
        {  
            cout << x[i] << ",";  
            T+=x[i];  
        }  
        cout << endl << T << endl;  
    }  
    return 0;  
}  
bool f(int x)  
{  
    int y=1;  
    if(x!=2)  
    {  
        for(int i=2;i<sqrt((double)x)+1;i++)  
        {  
            if(x%i==0)  
            {  
                y=0;  
                break;  
            }  
        }  
    }  
    return y;  
}  