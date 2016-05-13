#include<iostream>
 
using namespace std;
 
int main()
{
    int n, m;
    while(cin >> n >> m)
    {
        for(int i = 1; i < n + 1; i++)
        for(int j = 1; j < m + 1; j++)
        printf("%d x %d = %d\n", i, j, i * j);
    }
    return 0;
}