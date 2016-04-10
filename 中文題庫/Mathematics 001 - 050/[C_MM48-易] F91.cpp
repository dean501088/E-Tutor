#include<iostream>
 
using namespace std;
 
int f91(int n)
{
    if(n < 101)
        return f91(f91(n + 11));
    else
        return n - 10;      
}
 
int main()
{
    int n;
    while(cin >> n)
    {
        while(n--)
        {
            int temp; cin >> temp;
            cout << f91(temp) << endl; 
        }
    }
    return 0;
}