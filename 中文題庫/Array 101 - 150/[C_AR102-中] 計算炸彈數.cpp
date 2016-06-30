#include<iostream>
 
#define MAX 11
 
using namespace std;
 
int main()
{
    int n;
    while(cin >> n)
    {
        //initialize
        bool bomb[MAX][MAX];
        for(int i = 0; i < MAX; i++)
        for(int j = 0; j < MAX; j++)
            bomb[i][j] = true;
             
        //input
        for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> bomb[i][j];
         
        int count[MAX][MAX] = { 0 };        
        for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
        {
            if(bomb[i][j])
            {
                //neighbor
                count[i - 1][j - 1]++;
                count[i - 1][j]++;
                count[i - 1][j + 1]++;
                count[i][j - 1]++;
                count[i][j + 1]++;
                count[i + 1][j - 1]++;
                count[i + 1][j]++;              
                count[i + 1][j + 1]++;
            }   
        }
         
        //output
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {   
                if(bomb[i][j])
                    cout << 0;
                else
                    cout << count[i][j];
                if(j <= n - 1)
                    cout << " ";
            }
            cout << endl;
        }
    }
    return 0;
}