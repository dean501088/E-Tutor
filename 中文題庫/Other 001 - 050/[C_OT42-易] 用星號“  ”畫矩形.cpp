#include<iostream>
 
using namespace std;
 
int main()
{
    int n, m;
    while(cin >> n >> m)
    {
        if(n * m)
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
                cout << "*";
            cout << endl;
        }
        else
            cout << "no answer\n";
    }
    return 0;
}