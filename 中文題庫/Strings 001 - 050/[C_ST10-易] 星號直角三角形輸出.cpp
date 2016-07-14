#include<iostream>
 
using namespace std;
 
int main()
{
    int n;
    while(cin >> n)
    {
        for(int i = 1; i < n + 1; i++)
        {
            //left
            for(int j = 0; j < n - i; j++)
                cout << " ";
             
            //star
            for(int j = 0; j < i; j++)
                cout << "*";
                 
            cout << endl;
        }
    }
    return 0;
}