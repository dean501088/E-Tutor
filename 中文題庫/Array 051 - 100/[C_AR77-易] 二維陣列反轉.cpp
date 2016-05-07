#include<iostream>
 
using namespace std;
 
int main()
{
    int n, m;
    while(cin >> n >> m)
    {
        //initialize
        int arr[20][20];
        for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            arr[i][j] = i * m + j + 1;
         
        //output
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cout << arr[n - 1 - i][m - 1 - j];
                if(j < m - 1)
                    cout << " ";
            }
            cout << endl;
        }
    }
    return 0;
}