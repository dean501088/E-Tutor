#include<iostream>
 
using namespace std;
 
int main()
{
    int n;
    while(cin >> n)
    {
        if(n % 2 == 0)
            cout << "even";
        else
            cout << "odd";
        cout << endl; 
    }
    return 0;
}