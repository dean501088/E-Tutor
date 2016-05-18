#include<iostream>
 
using namespace std;
 
bool vertical(bool mine[8][8], int x, int y)
{
    for(int i = 0; i < 8; i++)
        if(mine[i][y] && i != x)
            return false;
    return true;
}
 
bool horizon(bool mine[8][8], int x, int y)
{
    for(int i = 0; i < 8; i++)
        if(mine[x][i] && i != y)
            return false;
    return true;
}
 
bool other(bool mine[8][8], int x, int y)
{
    for(int i = 1; i < 8; i++)
    {
        if(x + i > 7 || y + i > 7)
            break;
        if(mine[x + i][y + i])
            return false;
    }
    for(int i = 1; i < 8; i++)
    {
        if(x - i < 0 || y - i < 0)
            break;
        if(mine[x - i][y - i])
            return false;
    }
    return true;
}
 
int main()
{
    bool mine[8][8];
     
    //input
    for(int i = 0 ; i < 8; i++)
    for(int j = 0 ; j < 8; j++)
        cin >> mine[i][j];
     
    //check
    bool check = true;
     
    for(int i = 0 ; i < 8; i++)
    for(int j = 0 ; j < 8; j++)
    {   
        if(mine[i][j] &&
        !(vertical(mine, i, j)
        && horizon(mine, i, j)
        && other(mine, i, j)))
        {   
            check = false;
            break;
        }
    }
     
    if(check)
        cout << "O" << endl;
    else
        cout << "X" << endl;
 
    return 0;
}