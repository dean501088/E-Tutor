#include<iostream> 
    
using namespace std;    
 
int main()    
{    
    int n;    
    while(cin >> n && n)    
    {    
        int total=n;    
        while(n>5)    
        {    
            int change=n/6;    
            total+=change;    
            n=n%6+change;    
        }    
        cout << total << " " << n << endl;    
    }    
    return 0;    
}  