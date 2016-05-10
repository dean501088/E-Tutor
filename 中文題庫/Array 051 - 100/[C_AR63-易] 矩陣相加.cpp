#include<iostream>
 
using namespace std;
 
int main()
{
    int n, m;
    while(cin >> n >> m)
    {
        //input
        int x[20][20];
        for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> x[i][j];
         
        cin >> n >> m;
         
        int y[20][20];
        for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> y[i][j];
         
        //add
        for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            x[i][j] += y[i][j];
         
        //output
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cout << x[i][j];
                if(j < m - 1)
                    cout << " ";
            }
            cout << endl;
        }   
    }
    return 0;
}