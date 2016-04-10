#include<iostream>
#include<vector>
 
using namespace std;
 
int main()
{
    vector<int> fib;
    fib.push_back(0);
    fib.push_back(1);
     
    //initialize
    for(int i = 2 ; i < 50 ; i++)
        fib.push_back(fib[i - 1] + fib[i - 2]);
     
    int n;
    while(cin >> n)
    {
        for(int i = 0 ; i < n + 1 ; i++)
        {
            cout << fib[i];
             
            if(i < n)
                cout << ",";
        }
        cout << endl; 
    }
     
    return 0;
}