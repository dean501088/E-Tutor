#include<iostream>
#include<string>
 
using namespace std;
 
void clockwise(int arr[][30], int n)
{
    int index = 1;
 
    for (int i = 0; i < (n + 1) / 2; i++)
    {
        int size = n - i * 2;
 
        //up
        for (int j = 0; j < size; j++)
        {
            arr[i][i + j] = index;
            index++;
        }
 
        //right
        for (int j = 0; j < size - 1; j++)
        {
            arr[i + 1 + j][n - 1 - i] = index;
            index++;
        }
 
        //down
        for (int j = 0; j < size - 1; j++)
        {
            arr[n - 1 - i][n - 2 - i - j] = index;
            index++;
        }
 
        //left
        for (int j = 0; j < size - 2; j++)
        {
            arr[n - 2 - i - j][i] = index;
            index++;
        }
    }
}
 
void counter(int arr[][30], int n)
{
    int index = 1;
 
    for (int i = 0; i < (n + 1) / 2; i++)
    {
        int size = n - i * 2;
 
        //up
        for (int j = 0; j < size; j++)
        {
            arr[i + j][i] = index;
            index++;
        }
 
        //right
        for (int j = 0; j < size - 1; j++)
        {
            arr[n - 1 - i][i + 1 + j] = index;
            index++;
        }
 
        //down
        for (int j = 0; j < size - 1; j++)
        {
            arr[n - 2 - i - j][n - 1 - i] = index;
            index++;
        }
 
        //left
        for (int j = 0; j < size - 2; j++)
        {
            arr[i][n - 2 - i - j] = index;
            index++;
        }
    }
}
 
int main()
{
    string s;
    while (cin >> s)
    {
        //input
        int n, m;
 
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ',')
            {
                n = atoi(s.substr(0, i).c_str());
                m = atoi(s.substr(i + 1).c_str());
            }
        }
 
        int arr[30][30] = { 0 };        
 
        if (m == 1)
            clockwise(arr, n);
        else if (m == 2)
            counter(arr, n);
 
 
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%.03d", arr[i][j]);
 
                if (j < n - 1)
                    printf(",");
            }
            cout << endl;
        }
    }
    return 0;
}