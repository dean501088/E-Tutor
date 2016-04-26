#include<iostream>
 
using namespace std;
 
int main()
{
    int xn, xm;
    while(cin >> xn >> xm)
    {
        int x[20][20] = { 0 };
        for(int i = 0; i < xn; i++)
        for(int j = 0; j < xm; j++)
            cin >> x[i][j];
         
        int yn, ym;
        cin >> yn >> ym;
         
        int y[20][20] = { 0 };  
        for(int i = 0; i < yn; i++)
        for(int j = 0; j < ym; j++)
            cin >> y[i][j];
             
        int z[20][20] = { 0 };
        for(int i = 0; i < xn; i++)
        {
            for(int j = 0; j < ym; j++)
            {
                int sum = 0;
                for(int k = 0; k < xm; k++)
                    sum += x[i][k] * y[k][j];   
                z[i][j] = sum;
            }
        }
        for(int i = 0; i < xn; i++)
        {
            for(int j = 0; j < ym; j++)
            {
                cout << z[i][j];
                if(j < ym - 1)
                    cout << " ";
            }
            cout << endl;
        }
    }
    return 0;
}