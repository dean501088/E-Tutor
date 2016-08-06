#include<iostream>
 
#define MAX 11
 
using namespace std;
 
int main()
{
    //initialize
    bool bomb[MAX][MAX];
    for(int i = 0; i < MAX; i++)
    for(int j = 0; j < MAX; j++)
        bomb[i][j] = true;
         
    //input
    for(int i = 1; i <= 9; i++)
    {
        for(int j = 1; j <= 9; j++)
        {
            char c; cin.get(c);
            bomb[i][j] = c == '#';
        }   
        cin.get();
    }
     
    int count[MAX][MAX] = { 0 };        
    for(int i = 1; i <= 9; i++)
    for(int j = 1; j <= 9; j++)
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
    for(int i = 1; i <= 9; i++)
    {
        for(int j = 1; j <= 9; j++)
        {   
            if(bomb[i][j])
                cout << 9;
            else
                cout << count[i][j];
        }
        cout << endl;
    }
    return 0;
}