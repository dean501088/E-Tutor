#include<iostream>
 
using namespace std;
 
int main()
{
    int m[3][3];
    for(int i = 0; i < 3; i++)
    for(int j = 0; j < 3; j++)
        cin >> m[i][2 - j];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << m[i][j];
             
            if(j < 2)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}