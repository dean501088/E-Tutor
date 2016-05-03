#include<iostream>
 
using namespace std;
 
bool check(int x, int y, int arr[][102])
{
    return arr[x - 1][y] == 0
        || arr[x + 1][y] == 0
        || arr[x][y - 1] == 0
        || arr[x][y + 1] == 0;
}
 
int main()
{
    int q;
    while (cin >> q)
    {
        for (int k = 0; k < q; k++)
        {
            int n, m;
            cin >> n >> m;
 
            int arr[102][102] = { 0 };
 
            for (int i = 1; i < n + 1; i++)
            for (int j = 1; j < m + 1; j++)
                cin >> arr[i][j];
 
            if (k > 0)
                cout << endl;
 
            for (int i = 1; i < n + 1; i++)
            {
                for (int j = 1; j < m + 1; j++)
                {
                    if (arr[i][j] == 1 && check(i, j, arr))
                        cout << "0 ";
                    else
                        cout << "_ ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}